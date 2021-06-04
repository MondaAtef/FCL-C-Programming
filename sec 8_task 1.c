#include <stdio.h>
#include <stdlib.h>

float sum (float n1 ,float n2);

void max(int a[],int size);

int main()
{
    int x[2][2]={{1,2,3},
               {3,4,5}};

    int y[2][2]={{1,4,7},
                {7,8,9}};

   int res[2][2]={{0,0},{0,0}};

   for (int j=0;j<2;j++)
   {
       for(int i=0;i<2;i++)
       {
        res[j][i]+=x[j][i]*y[j][i];
       }

   }
   for (int j=0 ;j<2;j++)
   {
       for(int i=0;i<2;i++)
       {
           printf("%d     ",res[j][i]);
       }
       printf("\n");
   }




    return 0;
}
