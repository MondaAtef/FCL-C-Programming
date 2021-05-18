#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x ;
    int y ;
    int z ;


      for (int num =1 ; num <=10; num++){
        printf("%d\t",num);

        x = 10*num;

        printf("%d\t",x);

        y= 100*num ;

        printf("%d\t", y);

        z = 1000*num ;

        printf("%d\n",z);

      }

    return 0;
}
