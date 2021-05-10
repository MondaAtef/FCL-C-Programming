#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter =0;
    while (counter <1)
    {
        printf("  * \n");
        counter+=1;
    }
    int x=1;
    while (x<=1){
       printf(" ***\n");
         x+=1;
    }
    int y=5;
    do {
        printf("*****\n ***\n  *\n");
        y++;
    }
    while(y<=5);

    return 0;
}
