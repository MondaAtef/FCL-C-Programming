#include <stdio.h>
#include <stdlib.h>
int getsum (int n);
int main()
{
     int p;
     scanf("%d",&p);

    int k = getsum(p);

    printf("%d",k);


    return 0;
}
int getsum(int n)
{
    int sum =0;
    while(n!=0){
        sum =sum + n %10;
        n/=10;
    }
    return sum;
}
