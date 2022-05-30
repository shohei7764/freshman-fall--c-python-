


#include <glsc3d_3.h>
#include <stdio.h>
 int main()
 {
      g_init("Dice", 500, 600);
      g_cls();
      
      //スケール定義
        g_def_scale_2D(1, -1.0, 1.0, -1.0, 1.0, 10.0, 10, 400.0, 400.0);
        
        g_cls();
        
        g_sel_scale(1);
              // x軸の描画
  g_move_2D(0.0, 0.1);
  g_plot_2D(1.0, 0.1);
  
      // y軸の描画

  g_move_2D(0.1, 0.0);
  g_plot_2D(0.1, 0.8);
  
  
  g_text_standard(10.0, 120.0, "1/3");
  g_text_standard(10.0, 250.0, "1/6");
  g_text_standard(30.0, 420.0, "0");
  g_text_standard(100.0, 420.0, "1");
  g_text_standard(160.0, 420.0, "2");
  g_text_standard(220.0, 420.0, "3");
  g_text_standard(280.0, 420.0, "4");
  g_text_standard(340.0, 420.0, "5");
  g_text_standard(400.0, 420.0, "6");

//棒グラフ



g_box_2D(0.16,0.26,0.1,2.55*count[0] , G_YES, G_YES);
g_box_2D(0.31,0.41,0.1,2.55*count[1] , G_YES, G_YES);
g_box_2D(0.46,0.56,0.1,2.55*count[2] , G_YES, G_YES);
g_box_2D(0.61,0.71,0.1,2.55*count[3] , G_YES, G_YES);
g_box_2D(0.76,0.86,0.1,2.55*count[4] , G_YES, G_YES);
g_box_2D(0.91,1.0,0. , G_YES, G_YES);

      
      g_finish();
      g_sleep(100);

    return 0;
 }