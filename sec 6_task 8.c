#include <stdio.h>
#include <stdlib.h>

int main()
{
   int factorial ;

    for (int i=1 ; i<=5 ;i++)
    {

     factorial=1;

       for(int x=1; x<=i ; x++)
        {
            factorial*=x;
        }

    // printf("the factorials of the integers = %d\n",factorial);

    }
    printf("the factorials of the integers = %d\n",factorial);

    return 0;
}
