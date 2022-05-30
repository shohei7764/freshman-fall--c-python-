#include <glsc3d_3.h>
  #include <stdio.h>
  
  int main() {
    int i;
    float r, g, b;
     
    g_init("Test", 300, 300);
    g_cls();
     
    for(i = 0; i < 8; i++) {
      r = (float)(i / 4);
      g = (float)(i / 2) - 2*r;
      b = (float)(i % 2);
      g_text_color(r, g, b, 1.0);
      g_text_standard(10.0 + i*30, 50.0 + i*30 ,"Hello!");
    }
     
    g_finish();
    g_sleep(3);
  
    g_cls();
    g_finish();
    g_sleep(5);
  
    return 0;
  }
