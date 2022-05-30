#include <stdio.h>
#include <stdlib.h>

void foo();

int main()
{
   srand(100);
   printf("1回目\n");
   foo();
   printf("2回目\n");
   foo();

   return 0;
}

void foo()
{
    int i, r;

    for(i = 0; i < 10; i++)
    {
        r = rand();
        printf("%d\n", r);
    }
}