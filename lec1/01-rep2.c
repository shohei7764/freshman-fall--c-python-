//番号2610210086、宮沢祥平

#include<stdio.h>
#include<math.h>

int main (void)
{

int x;
printf("Please enter the year\n");
scanf("%d",&x);

if(x%4==0 && x%100!=0)
{
printf("It's  a leap year");
}
else if(x%400==0)
{
printf("It's  a leap year");
}
else
{
printf("It's not a leap year\n");
}



return 0;
}