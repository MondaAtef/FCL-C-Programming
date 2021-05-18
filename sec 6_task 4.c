#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours ;
    float salary;
    float rate ;

    while (hours>0){
        printf("Enter the hours worked (-1 to end )=  ");
         scanf("%d",&houres);
         if(hours <0)
         {
             break;
         }
         if(hours >40)
         {
             printf("the hourly rate (00.0 $) ");
             scanf("%f",&rate);
             salery = 40 * rate +(hours -40)*15;

         }
           else
                selary = 40 * rate;
         }
    return 0;
}
