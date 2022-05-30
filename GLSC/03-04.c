#include <glsc3d_3.h>
  #include <stdio.h>
  
  int main() {
    g_init("Test", 300, 300);
    g_cls();
  
    g_text_color(1.0, 0.0, 0.0, 1.0);
    g_text_size(40.0);
    g_text_standard(10.0, 100.0, "こんにちは!");
     
    g_text_color(0.0, 0.0, 0.0, 1.0);
    g_text_size(20.0);
    g_text_standard(50.0, 150.0, "世界とGLSC");
     
    g_finish();
    g_sleep(10);
  
    return 0;
  }