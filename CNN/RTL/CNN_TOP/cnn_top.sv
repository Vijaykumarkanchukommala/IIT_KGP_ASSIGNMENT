module cnn_top #(
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


  cnn_addr_read 
  #(
     .IMAGE_HEIGHT (IMAGE_HEIGHT ), 
     .IMAGE_WIDTH  (IMAGE_WIDTH  ), 
     .PIXEL_WIDTH  (PIXEL_WIDTH  ), 
     .NUM_BANKS    (NUM_BANKS    ), 
     .ADDRESS_WIDTH(ADDRESS_WIDTH), 
     .NUM_ROWS     (NUM_ROWS     ), 
     .NUM_COLS     (NUM_COLS     ), 
     .WINDOW       (WINDOW       )  
   ) u_cnn_addr_read
   (
      .i_clk        (i_clk    ), 
      .i_reset_n    (i_reset_n), 
      .i_start      (i_start  ),
      .o_valid      (o_valid  ),
      .o_done       (o_done   ),
      .o_pixel      (o_pixel  ) 
   );



endmodule
