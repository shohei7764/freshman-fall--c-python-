

//学生番号2610210086、宮沢祥平
//このプログラムはコッホ曲線を参考に以下のルールで作成した。
//まずdrawline関数とkochの関数をdouble型で定義し、その後メイン関数で入力した回数まで繰り返すようなプログラムである。koch関数はまず繰り返しの回数に応じてifで場合分けを行い、再帰を用いている。例えば2回繰り返す場合、4^2+1(17)個の点を先に求め、その後対応する点に対して線を引くという操作である。そうすることでこのプログラムは簡潔に書くことができる。
//最初、関数や数値を最初int型で置いたせいで、表示される図形の形が少し歪になってしまう現象が起きたが、double型にすることで解消した。

//参考にした文献＿https://jpeducom.co.jp/FE18a-pm/t06.html


#include <stdio.h>
#include <stdlib.h>
#include <glsc3d_3.h>
#include <math.h>
#define PI 3.1415926535897932384626
 
 //④関数
 void drawline(double x1,double y1, double x2, double y2)
{
	 g_line_width(1);
	 g_move_2D(x1,y1);
	 g_plot_2D(x2,y2);
 }
 
void koch(double x1,double y1,double x2,double y2,double N)
 {
     //⑤配列
    double x[3];
 	double y[3];
 	
 	//①条件文
 	if (N<=0) 
 	drawline( x1, y1, x2, y2 );
 	else {
 	    
	    x[0] = ( 2*x1+x2)/3;
	    y[0] = ( 2*y1+y2)/3;
	    x[1] = ( x1 + 2*x2 )/3;
	    y[1] = ( y1+2*y2)/3;
	    x[2] = x[0]+(cos(PI/3))*(x[1]-x[0])-(sin(PI/3))*(y[1]-y[0]);
	    y[2] = y[0]+(sin(PI/3))*(x[1]-x[0])+(cos(PI/3))*(y[1]-y[0]);
	    koch( x1, y1, x[0], y[0],N-1);
	    koch( x[0], y[0], x[2], y[2],N-1);
	    koch( x[2], y[2], x[1], y[1],N-1);
	    koch( x[1], y[1], x2, y2,N-1);
	}
}


 //メイン関数
 
 int main()
 {
 int a = 0,i;

 printf("何回繰り返しますか？");
 //③scan入力
 scanf("%d",&a);
 
 g_init("Koch curve", 400.0, 400.0);
 g_def_scale_2D(1,0,35,-35,0,10,10,350,350);
 
 
 //②繰り返し文（パラパラ漫画）
 for(i=0;i<=a;i++)
 {
    g_cls();
 
    g_sel_scale(1);
 
    koch(5,-20,30,-20,i);
    
    g_text_standard(10.0, 90.0, "i=%d",i);
 
    g_finish();
    g_sleep(1);
 
 }
 g_sleep(30);
 
 return 0;
 }
 

 	
 	

 
