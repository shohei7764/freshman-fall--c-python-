#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, r;

   srand(100);

    for(i = 0; i < 10; i++)
    {
        r = rand();
        printf("%d\n", r);
    }

   return 0;
}