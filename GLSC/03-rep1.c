//2610210086、宮沢祥平、入力された文字がだんだん大きくなって動くアニメーション

#include <glsc3d_3.h>
  #include <stdio.h>
  
  int main() {
    int i, j;
    float r, g, b;
   
    g_init("Test", 300, 300);
   
   char text[256];
   printf("文字を入力\n");
   scanf("%s", text);
   
    for(i = 0; i < 300; i++) {
      // 画面の消去
      g_cls();
  
      j = i % 8;
      r = (float)(j / 4);
      g = (float)(j / 2) - 2*r;
      b = (float)(j % 2);
      g_text_color(r, g, b, 1.0);
      g_text_size(10+i);
      // 文字列の表示
      g_text_standard(30.0, 10.0 + i, text);
   
      // 描画と停止
      g_finish();
      g_sleep(0.02);
    }
g_cls();
g_text_color(0.5, 0.2, 0.3, 1.0);
g_text_size(40.0);
g_text_standard(30.0, 10.0, "Tank you for watching!");
   
    g_sleep(10);
}