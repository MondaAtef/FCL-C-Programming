#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ;

    int sum_even=0;

    int product_odd =1;

    printf("enter num = ");

    scanf("%d",&num);

    for(int i=1; i< num;i++){

        if(i%2==0)

        sum_even+=i;

}
printf("tne summtion of even integer = %d\n",sum_even);

   int z=1;

   while(z < num){

    if(z % 2 !=0)

    product_odd *=z;

    z++;

   }
    printf("the product of odd integers = %d\n",product_odd);












    return 0;
}
