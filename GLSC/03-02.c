#include <glsc3d_3.h>
  #include <stdio.h>
  
  int main(){
    g_init("Test", 300, 300);
    g_cls();
  
    g_text_standard(10.0, 100.0, "こんにちは! 世界とGLSC");
  
    g_finish();
    g_sleep(10);
  
    return 0;
  }