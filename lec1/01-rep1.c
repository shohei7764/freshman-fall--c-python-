//番号2610210086、宮沢祥平

#include <stdio.h>
#include<math.h>


int main (void)
{
double a,b;
printf("write number a,b\n");
scanf("%lf %lf",&a,&b);

if(b != 0){
printf("a-b = %lf\n",a-b);
printf("a*b = %lf\n",a*b);
printf("a/b = %lf\n",a/b);
printf("aをbで割った余り = %lf\n",fmod(a,b));  //整数型で演算を行うと、小数点は切り捨てられるので０になる。よって浮動小数点を扱えるfmodを用いるとこの問題は解決できる。
printf("a^b = %lf\n",pow(a,b));
}else{
printf("a-b = %lf\n",a-b);
printf("a*b = %lf\n",a*b);
printf("a/b is undefinable.\n");
printf("aをbで割った余り is undefinable.\n");
printf("a^b = %lf\n",pow(a,b));
}
return 0;
}