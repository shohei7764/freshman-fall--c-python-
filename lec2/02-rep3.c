//2610210086、宮沢祥平、１年２組３９番

#include <stdio.h>
    
// 最大値最小値平均値
      
      void Calculation( double data[5], double *mx, double *mn, double *av );
      
      int main()
      {
          int i;
          double data[5];
          double Max = 0.0;
          double Min = 0.0;
          double Ave = 0.0;
          double Var = 0.0;
      
          // データの入力
          for(i=0; i<5; i++){
              printf("%d つ目の実数を入力してください：", i+1);
              scanf("%lf", &data[i]);
          }
      
          // 最大値、最小値、平均値の計算
          Calculation(&data[5], &Max, &Min, &Ave);
      
          // 計算結果の表示
          printf("最大値：%lf\n最小値：%lf\n平均値：%lf\n", Max, Min, Ave);
      
          
          return 0;
      }
      
      // 与えられた５つのデータの最大値、最小値、平均値を計算する関数
      // data:データ　mx:最大値　mn:最小値　av:平均値
      void Calculation( double data[5], double *mx, double *mn, double *av )
  {
      int i;
      	*mx = data[0];
      	*mn = data[0];
      	 for(i=1; i<5; i++)
      	 {
            if(data[i] > *mx){
            *mx = data[i];
             }
           if(data[i] < *mn){
            *mn = data[i];
             }        
          }
          *av = ((data[0])+(data[1])+(data[2])+(data[3])+(data[4]))/2;
 return;
}