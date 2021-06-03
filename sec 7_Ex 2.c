#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   int array[n];
   int sum =0;
   int averge;
   printf("Enter the number of element = ");
   scanf("%d",&n);

   for(int i=0 ;i < n ; i++)
   {
       printf("the number %d =",i);
       scanf("%d",&array[i]);
       sum = sum  + array[i];

   }
   avage = sum / n;
   printf("sum of number = %d\n",sum);
   printf("averge = %d\n",avage);
    return 0;
}
