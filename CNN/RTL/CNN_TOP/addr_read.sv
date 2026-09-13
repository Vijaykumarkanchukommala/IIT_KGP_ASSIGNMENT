module adder_read #(
  parameter int IMAGE_HEIGHT    = 256,
  parameter int IMAGE_WIDTH     = 256,
  parameter int PIXEL_WIDTH     = 8,
  parameter int NUM_BANKS       = 4,
  parameter int ADDRESS_WIDTH   = 14,  
  parameter int NUM_ROWS        = 256,
  parameter int NUM_COLS        = 64, 
  parameter int WINDOW          = 3
)
(
    input                         i_clk, 
    input                         i_reset_n, 
    input                         i_start,
    output                        o_valid,
    output                        o_done,
    output [PIXEL_WIDTH-1:0]      o_pixel[WINDOW-1:0] 
);

  localparam  STATE_REG_WIDTH = 2;
  localparam  IDLE = 2'b00;
  localparam  RUN  = 2'b01;
  localparam  WAIT = 2'b10;
  localparam  DONE = 2'b11;

  localparam WINDOW_CNT_WIDTH       = $clog2(WINDOW);
  localparam ROWS_ADDRESS_WIDTH     = $clog2(NUM_ROWS );
  localparam COLS_ADDRESS_WIDTH     = $clog2(NUM_COLS );
  localparam LAST_SCAN_CNT          = IMAGE_WIDTH-WINDOW+1;
  localparam SCAN_CNT_WIDTH         = $clog2(IMAGE_WIDTH);

  wire                              w_cen      [NUM_BANKS-1:0]; 
  wire                              w_wen      [NUM_BANKS-1:0]; 
  wire  [ADDRESS_WIDTH-1:0]         w_addr     [NUM_BANKS-1:0]; 
  wire  [PIXEL_WIDTH  -1:0]         w_din      [NUM_BANKS-1:0]; 
  wire  [PIXEL_WIDTH  -1:0]         w_dout     [NUM_BANKS-1:0]; 
  reg   [COLS_ADDRESS_WIDTH-1:0]    r_col_addr [NUM_BANKS-1:0]; 
  reg   [ROWS_ADDRESS_WIDTH-1:0]    r_row_addr [NUM_BANKS-1:0]; 

  reg   [STATE_REG_WIDTH-1:0]       r_state_next;   
  reg   [STATE_REG_WIDTH-1:0]       r_state_reg;   
  reg   [SCAN_CNT_WIDTH-1:0]        r_scan_cnt;
  reg   [NUM_BANKS-1:0]             r_bank_sel;
  reg   [NUM_BANKS-1:0]             r_bank_sel_dly;
  reg   [NUM_BANKS+WINDOW-1-1:0]    r_bank_sel_dly_frame;
  reg [PIXEL_WIDTH-1:0]             r_pixel[WINDOW-1:0]; 

  wire                        w_run;
  wire                        w_start;

  assign o_done   = (r_state_reg == DONE);
  assign w_run    = (r_state_reg == RUN );
  assign w_start  = (r_state_reg == IDLE ) & i_start;
  assign o_pixel  = r_pixel;

  assign r_bank_sel_dly_frame = {r_bank_sel_dly[0+:WINDOW-1],r_bank_sel_dly};

  genvar bank_i;
  generate
   for(bank_i = 0; bank_i < NUM_BANKS; bank_i = bank_i + 1) begin
     assign w_addr[bank_i]   = {r_row_addr[bank_i],r_col_addr[bank_i]};
     assign w_cen [bank_i]   = r_bank_sel[bank_i];
     assign w_wen [bank_i]   = !r_bank_sel[bank_i];
   end
  endgenerate
  

  integer bank_idx;

  always_ff @(posedge i_clk or negedge i_reset_n) begin
    if(!i_reset_n) begin
      r_bank_sel   <= {NUM_BANKS{1'b1}}; 
    end else if(w_start) begin
      r_bank_sel   <= {{NUM_BANKS-WINDOW{1'b1}},{WINDOW{1'b0}}}; 
    end else if(w_run) begin
        r_bank_sel   <= (r_bank_sel<<1) | (r_bank_sel>>(NUM_BANKS-1)); 
    end
  end


  always_ff @(posedge i_clk or negedge i_reset_n) begin
    if(!i_reset_n) begin
      r_bank_sel_dly   <= {NUM_BANKS{1'b1}}; 
    end else begin
      r_bank_sel_dly   <= r_bank_sel; 
    end
  end

  always_ff @(posedge i_clk or negedge i_reset_n) begin
    if(!i_reset_n) begin
      r_scan_cnt   <= {SCAN_CNT_WIDTH{1'b0}}; 
    end else if(w_start) begin
      r_scan_cnt   <= {SCAN_CNT_WIDTH{1'b0}}; 
    end else if(w_run) begin
      if(r_scan_cnt == LAST_SCAN_CNT-1) 
        r_scan_cnt   <= {SCAN_CNT_WIDTH{1'b0}}; 
      else
        r_scan_cnt   <= r_scan_cnt + 1'd1; 
    end
  end

  always_ff @(posedge i_clk or negedge i_reset_n) begin
    if(!i_reset_n) begin
      for(bank_idx = 0; bank_idx < NUM_BANKS; bank_idx = bank_idx + 1) begin
         r_col_addr[bank_idx]  <= {COLS_ADDRESS_WIDTH{1'b0}};
      end
    end else if(w_start) begin
      for(bank_idx = 0; bank_idx < NUM_BANKS; bank_idx = bank_idx + 1) begin
         r_col_addr[bank_idx]  <= {COLS_ADDRESS_WIDTH{1'b0}};
      end
    end else if(w_run) begin
      if(!r_bank_sel[NUM_BANKS-1] & r_bank_sel[0]) begin
         r_col_addr[bank_idx]  <= COLS_ADDRESS_WIDTH'(r_col_addr[bank_idx][COLS_ADDRESS_WIDTH-1:0]+1);
         for(bank_idx = 1; bank_idx < NUM_BANKS; bank_idx = bank_idx + 1) begin
           r_col_addr[bank_idx]  <= (r_col_addr[bank_idx-1][COLS_ADDRESS_WIDTH-1:0]);
         end
      end else begin
         for(bank_idx = 1; bank_idx < NUM_BANKS; bank_idx = bank_idx + 1) begin
           r_col_addr[bank_idx]  <= (r_col_addr[bank_idx-1][COLS_ADDRESS_WIDTH-1:0]);
         end
      end
    end
  end


  always_ff @(posedge i_clk or negedge i_reset_n) begin
    if(!i_reset_n) begin
      for(bank_idx = 0; bank_idx < NUM_BANKS; bank_idx = bank_idx + 1) begin
         r_row_addr[bank_idx]  <= {ROWS_ADDRESS_WIDTH{1'b0}};
      end
    end else if(w_start) begin
      for(bank_idx = 0; bank_idx < NUM_BANKS; bank_idx = bank_idx + 1) begin
         r_row_addr[bank_idx]  <= {ROWS_ADDRESS_WIDTH{1'b0}};
      end
    end else if(w_run) begin
      for(bank_idx = 0; bank_idx < NUM_BANKS; bank_idx = bank_idx + 1) begin
         r_row_addr[bank_idx]  <= {ROWS_ADDRESS_WIDTH{1'b0}};
      end
    end
  end


  always_ff @(posedge i_clk or negedge i_reset_n) begin
    if(!i_reset_n) begin
      r_state_reg  <= {STATE_REG_WIDTH{1'b0}};
    end else begin
      r_state_reg  <= r_state_next;
    end
  end

  always_comb begin
    r_state_next = r_state_reg;
    case(r_state_reg)
      IDLE: begin
              if(i_start) 
                r_state_next = RUN;
            end
      RUN : begin
                if(r_scan_cnt == LAST_SCAN_CNT-1)
                   r_state_next = WAIT;
            end
      WAIT : begin
                r_state_next = DONE;
            end
      DONE: begin
                r_state_next = IDLE;
            end
      default: begin
               r_state_next = r_state_reg;
               end
    endcase
  end

  sram_bank_top
  #(
    .DATA_WIDTH    (PIXEL_WIDTH  ),  
    .NUM_BANKS     (NUM_BANKS    ), 
    .ADDRESS_WIDTH (ADDRESS_WIDTH),  
    .NUM_ROWS      (NUM_ROWS     ), 
    .NUM_COLS      (NUM_COLS     )  
  ) u_sram_bank_top
  (
    .i_clk        (i_clk ),
    .i_cen        (w_cen ),
    .i_wen        (w_wen ),
    .i_addr       (w_addr), 
    .i_din        (w_din ), 
    .o_dout       (w_dout)  
  );

  integer wdx,bdx;
  integer idx;
  always_comb begin
    for(wdx = 0; wdx < WINDOW; wdx = wdx+1) begin 
       r_pixel[wdx] = w_dout[wdx];
    end
    for(bdx = 0; bdx < NUM_BANKS; bdx = bdx+1) begin 
      if(~|r_bank_sel_dly_frame[bdx+:WINDOW]) 
        for(wdx = 0; wdx < WINDOW; wdx = wdx+1) begin 
           idx = (wdx + bdx)%NUM_BANKS;
           r_pixel[wdx] = w_dout[idx];
        end
    end
  end

endmodule
