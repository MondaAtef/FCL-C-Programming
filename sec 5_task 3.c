#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter =0;
    int squar=1;
    int cube =1;

    printf("number  squar  cube\n");
    while (counter <=10){
    printf("%d \t",counter);

        squar = counter * counter;
        printf("%d \t",squar);

        cube = counter * counter *counter;
        printf("%d \n",cube);
        counter++;
    }


    return 0;
}
