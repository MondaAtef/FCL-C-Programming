#include <stdio.h>

int main()
{
    int counter , num , remander ;

    int sum = 0;

    printf("Enter an integer\n");
    scanf (" %d ", &num) ;

    counter = num ;


    while (counter !=0 )
    {
        remander = counter % 10 ;

        sum = sum + remander ;

        counter = counter /10 ;
    }
     printf (" sum of digits %d = %d\n ", num ,sum);

    return 0;

}
