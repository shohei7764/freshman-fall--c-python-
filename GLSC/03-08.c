#include <glsc3d_3.h>
  #include <stdio.h>
  
  int main() {
    int i, j;
    float r, g, b;
   
    g_init("Test", 300, 300);
   
    for(i = 0; i < 300; i++) {
      // 画面の消去
      g_cls();
  
      j = i % 8;
      r = (float)(j / 4);
      g = (float)(j / 2) - 2*r;
      b = (float)(j % 2);
      g_text_color(r, g, b, 1.0);
      // 文字列の表示
      g_text_standard(10.0 + i, 10.0 + i, "Hello!");
   
      // 描画と停止
      g_finish();
      g_sleep(0.02);
    }
   
    g_sleep(10);
  
    return 0;
  }
 