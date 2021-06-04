#include <stdio.h>
#include <stdlib.h>
long watch(long h,long m,long s);
int main()
{

    int hours;
    int minutes;
     int second;

    scanf("%ld%ld%ld",&hours,&minutes,&second);

  long k = watch (hours, minutes, second);

    printf("%ld",k);
    return 0;
}
long watch (long h , long m ,long s)
{
    long second = 3600*h + 60*m + s;
    return second;
}
