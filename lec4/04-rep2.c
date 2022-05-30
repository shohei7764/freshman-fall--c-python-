//数値を標準座標のうまい場所に置くのが一番時間かかりました。それ以外は適当にやりました〜

//2610210086、宮沢祥平


#include <glsc3d_3.h>
#include <stdio.h>
// 次の文は数学関数を使う場合に必要
#include <math.h>

// 定数の定義
#define PI (3.1415926)
#define L (2*PI)


int main()
{
printf("enter the number.\n");
  int i,N;
  scanf("%d", &N);
  double X[N], Y[N], dx;
  // dx を求める
  dx = L/(N - 1);

  // GLSCの初期化
  g_init("Sine Curve", 450, 500);

  // 自由座標系の定義
  g_def_scale_2D(1, 0.0, L, -1.0, 1.0, 20.0, 20.0, 360.0, 160.0);
  g_def_scale_2D(2, 0.0, L, -1.0, 1.0, 20.0, 240.0, 360.0, 160.0);

  g_cls();

  // 外枠の描画
  g_sel_scale(1);
  g_area_color(1.0, 1.0, 1.0, 1.0);
  g_line_color(0.0, 0.0, 0.0, 1.0);
  g_line_width(2);
  g_box_2D(0.0, L, -1.0, 1.0, G_YES, G_YES);
  g_text_size(10.0);
  g_text_standard(2.0, 180.0, "-1.0");
  g_text_standard(190.0, 190, "PI");
  g_text_standard(370.0, 190.0, "2PI");
  g_text_standard(3.0, 100.0, "0.0");
  g_text_standard(3.0, 20.0, "1.0");
  g_text_standard(20.0, 190.0, "0.0");

      // x軸の描画
  g_move_2D(0.0, 0.0);
  g_plot_2D(L, 0.0);

  
  // y軸の描画

  g_move_2D(L/2.0, 1.0);
  g_plot_2D(L/2.0, -1.0);

 // X[i] を計算
  for(i = 0; i < N; i++)
  {
    X[i] = i*dx;
  }

  // Y[i] を計算
  for(i = 0; i < N; i++)
  {
    Y[i] = sin(X[i]);
  }

  // 折れ線を描く
  g_line_color(1.0, 0.0, 0.0, 1.0);
  g_line_type(0);
  g_line_width(2);

  g_move_2D(X[0], Y[0]);
  for(i = 1; i < N; i++)
  {
    g_plot_2D(X[i], Y[i]);
  }


  
// 外枠の描画（２個目）
  g_sel_scale(2);
  g_area_color(1.0, 1.0, 1.0, 1.0);
  g_line_color(0.0, 0.0, 0.0, 1.0);
  g_line_width(2);
  g_box_2D(0.0, L, -1.0, 1.0, G_YES, G_YES);
  g_text_size(10.0);
  g_text_size(10.0);
  g_text_standard(190.0, 420, "PI");
  g_text_standard(370.0, 420, "2PI");
  g_text_standard(2.0, 320.0, "0.0");
  g_text_standard(2.0, 240.0, "1.0");
  g_text_standard(2.0, 400.0, "-1.0");
  g_text_standard(20.0, 420.0, "0.0");
  
  
    // x軸の描画
  g_move_2D(0.0, 0.0);
  g_plot_2D(L, 0.0);

  
  // y軸の描画

  g_move_2D(L/2.0, 1.0);
  g_plot_2D(L/2.0, -1.0);
  
  

  // X[i] を計算
  for(i = 0; i < N; i++)
  {
    X[i] = i*dx;
  }

  // Y[i] を計算
  for(i = 0; i < N; i++)
  {
    Y[i] = cos(X[i]);
  }

  // 折れ線を描く
  g_line_color(1.0, 0.0, 0.0, 1.0);
  g_line_type(0);
  g_line_width(2);

  g_move_2D(X[0], Y[0]);
  for(i = 1; i < N; i++)
  {
    g_plot_2D(X[i], Y[i]);
  }

  g_finish();
  g_sleep(100);

  return 0;
}
