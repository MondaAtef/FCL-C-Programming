#include <stdio.h>

int main(void)
{
    int i,j,num;
    int place = 1;
    int bin = 0;
    int rem = 0;
    printf("Decimal\t");
    printf("Binary\t");
    printf("Octal\t");
    printf("Hexadecimal\n");
    
    for (i = 1; i <= 255; i++)
    {
        num = i;
        printf("%d\t", i);
        while(num)  
        {  
        rem   = num % 2;  
        num   = num / 2;  
        bin   = bin + (rem * place);  
        place = place * 10;  
        }
        printf("%d\t", bin);
        printf("%o\t", i);
        printf("%X\n", i);
        place = 1;
        bin = 0;
        rem = 0;
    }
}