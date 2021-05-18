#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter the num = ");

    scanf("%d",&num);

    if(num%2 == 0){
        printf("even",num);
    }
    else
        printf("odd",num);

    return 0;

}
