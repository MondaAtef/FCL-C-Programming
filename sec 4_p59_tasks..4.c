#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    printf ("enter x  ,  y = ");
    scanf("%d%d",&x,&y);

     if (x==0&&y==0){

        printf("origen");
     }
     else if(x>0 && y>0)
     {
        printf("Quarter 1");
     }
     else if(x<0 && y>0)
     {
        printf("Quarter 2");
     }
    else if(x<0&&y<0)
    {
        printf("Quartet 3");
    }
    else if(x>0&&y<0)
    {
        printf("Quarter 4");
    }
    else if(y==0&&x!=0)
    {
        printf("X-axis");
    }
    else if(x==0&&y!=0)
    {
        printf("Y-axis");
    }
    return 0;
}
