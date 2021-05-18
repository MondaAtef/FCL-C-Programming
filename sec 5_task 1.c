#include <stdio.h>
#include <stdlib.h>

int main()
{
   float u, a, t ;
   float v;
   float s;

   printf("the initial velocity = \n",u);

   scanf("%f",&u);

   printf("The acceleration= \n",a);

   scanf("%f",&a);

   printf("the time=  \n",t);

   scanf("%f",&t);

   v = u +  a* t ;

   s = u *t + 0.5* a* t*t ;

   printf("the final velocity = %f\n",v);

   printf("the distance traversed = %f\n",s);

    return 0;
}
