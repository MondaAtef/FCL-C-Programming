#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void ConverttoUpper ();
int main()
{
    ConverttoUpper();
    return 0;
}

ConverttoUpper()
{
    char Text[50];
    printf("Enter A text : \n");

    fgets(Text, 50 , stdin);

    printf("Your Text in Uppercase %s" , strupr(Text));
}
