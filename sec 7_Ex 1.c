#include <stdio.h>
#include <stdlib.h>

int main()
{
   int array [9]={1,2,3,4,5,6,7,8,9};

   for (int i=8; i>=0;i--)
   {
       printf("%d",array[i]);
       printf("\n");
   }
    return 0;
}
