//2610210086、宮沢祥平、グラフ、軸、自由座標系の設定が大変でした。GLSCむずい！！

#include <glsc3d_3.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//ランダム関数
int dice(int s)
	{
		s = (1+rand()%6);
		return s;
	}
	
//n；試行回数
int n;
int m,s,a;

//GLSCの変数



//メイン関数
int main (void){
srand((unsigned)time(NULL));
scanf("%d", &n);


     g_init("Dice", 500, 600);
     
     
     //スケール定義
        g_def_scale_2D(1, 0.0, 1.0, 0.0, 1.0, 2.0, 2.0, 400.0,400.0);
        
      
for(a=1; a<=100; a++){
	int  count[]={0,0,0,0,0,0};
	for(m = 1; m<= n; m++){
		count[dice(s)-1]++;
	}
	
double a0=(float)count[0]/n;
double a1=(float)count[1]/n;
double a2=(float)count[2]/n;
double a3=(float)count[3]/n;
double a4=(float)count[4]/n;
double a5=(float)count[5]/n;

	printf("サイコロ１は%d回出て、確率は%lf\nサイコロ２は%d回出て、確率は%lf\nサイコロ３は%d回出て、確率は%lf\nサイコロ４は%d回出て、確率は%lf\nサイコロ５は%d回出て、確率は%lf\nサイコロ６は%d回出て、確率は%lf\n\n",count[0],a0,count[1],a1,count[2],a2,count[3],a3,count[4],a4,count[5],a5);
	


        
        g_cls();
        
        g_sel_scale(1);
        
  // x軸の描画
  g_move_2D(0.0, 0.05);
  g_plot_2D(1.0, 0.05);
  
  // y軸の描画

  g_move_2D(0.15, 0.05);
  g_plot_2D(0.15, 1.0);
  
  //文字
  g_text_standard(10.0, 120.0, "1/3");
  g_text_standard(10.0, 250.0, "1/6");
  g_text_standard(30.0, 420.0, "0");
  g_text_standard(100.0, 420.0, "1");
  g_text_standard(160.0, 420.0, "2");
  g_text_standard(220.0, 420.0, "3");
  g_text_standard(280.0, 420.0, "4");
  g_text_standard(340.0, 420.0, "5");
  g_text_standard(400.0, 420.0, "6");


g_area_color(1.0, 0.0, 0.0, 1.0);
g_box_2D(0.22, 0.32,0.05,0.08724+1.97804*a0,G_YES, G_YES);
g_box_2D(0.35, 0.45,0.05,0.08724+1.97804*a1,G_YES, G_YES);
g_box_2D(0.48, 0.58,0.05,0.08724+1.97804*a2,G_YES, G_YES);
g_box_2D(0.61, 0.71,0.05,0.08724+1.97804*a3,G_YES, G_YES);
g_box_2D(0.74, 0.84,0.05,0.08724+1.97804*a4,G_YES, G_YES);
g_box_2D(0.87, 0.97,0.05,0.08724+1.97804*a5,G_YES, G_YES);

      
      g_finish();
      g_sleep(1);
      
      
}



 g_sleep(10);


return 0;
}


