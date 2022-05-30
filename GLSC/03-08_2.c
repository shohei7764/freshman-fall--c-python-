#include <glsc3d_3.h>
  #include <stdio.h>
  
  int main() {
    double   a;
    char   text[256];
  
    a = 3.14;
    g_init("Test", 300, 300);
    g_cls();
   
    sprintf(text, "a = %lf", a); 
  
    g_text_standard(10.0, 100.0, text);
  
    g_finish();
    g_sleep(10);
  
    return 0;
  }