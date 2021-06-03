#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numbers[10];

    for (int i = 0 ; i < 10 ;i++)
    {
        scanf("%d\n",&numbers[i]);

    }

    for (int h = 0 ; h < 10 ; h++)
    {
        for (int k = h+1 ; k < 10; k++)
        {
                if(numbers[h] == numbers[k])
                  {
                    printf("%d\t",numbers[k]);
                  }
        }
    }
    return 0;
}
