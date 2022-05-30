#include <stdio.h>
#include <stdlib.h>

#define  COUNT_MAX   (10)
#define  RN   (rand()/(double)RAND_MAX)

int main()
{
    int i;

   srand(100);

    for(i = 0; i < COUNT_MAX; i++)
    {
        printf("%lf\n", RN);
    }

   return 0;
}