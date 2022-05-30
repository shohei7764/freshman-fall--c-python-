//2610210086、宮沢祥平、１年２組３９番


#include <stdio.h>
#include<math.h>

 int PrimeNumber(int n){
     for (int i=2;i<n;i++){
         if(n%i ==0){
             return -1;
             }
             else if(n<0){
                 return -1;
                 }
            }
            return 1;
}

int main(void){ 
    int i,k=0;
    for (i = 3; i <= 1000; i++){
        if (-1 == PrimeNumber(i)){
            printf("%d ", i);
            k=k+i;
            }
        }
    printf("%d\n",k);

 return 0;
 }
