#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num ;
   int counter =0;
   printf("Enter the number = \n");
   scanf("%d",&num);

   while (num!=0){
    if (num % 10 ==7)
        counter ++ ;
     num =num /10;
   }
    printf ("the unmber of 7 in degits = %d",counter);


    return ;
}
