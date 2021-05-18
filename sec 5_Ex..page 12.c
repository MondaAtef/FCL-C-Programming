//Exercises _Days 5_page 12
#include <stdio.h>

int main()
{
    int a=13;
    int b=27;
    int s=14;
    //sum
    int sum;
    sum = a+b+s;
    printf("sum=%d\n",sum);
     int average;
     average=a+b+s/3;
     printf("average=%d\n",average);
     //product
     int product;
     product = a*b*s;
     printf("product=%d\n",product);
     //the smallest number
     if(b<a && b<s)
     {
       printf("the smallest is %d\n",b);
     }
     else if(a<s)
     {
         printf("the smallest =%d\n",a);
     }
     else{
        printf("the smallest=%d\n",s);
     }
     //the largest number
     if(a>b && a>s)
     {
         printf("the largest = %d\n",a);
     }
     else if(b>s)
     {
         printf("the largest = %d\n",b);
     }
     else
     {
         printf("the largest = %d\n",s);
     }
    return 0;
}
