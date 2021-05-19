#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 3 ; i<=998 ;i+=5)
    {
    printf("%d\,",i);

    }
        printf("\n----------------------------\n");

     for (int x =20 ; x>=-1000; x-=6)
     {
         printf("%d\,",x);
     }
         printf("\n---------------------------\n");

     for(int y=3 ; y<=234375 ; y=y*5 ){
        printf("%d\,",y);
     }
         printf("\n----------------------------\n");


      for (int g=1;g<=8192 ; g = g*2)
      {
          printf("%d\,",g);
      }
         printf("\n------------------------------\n");
    return 0;
}
