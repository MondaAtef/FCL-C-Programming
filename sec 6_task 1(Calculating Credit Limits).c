#include <stdio.h>
#include <stdlib.h>

int main()
{
  int account;

  float limit;

  float balance;

  float newlim;

   for(int i=1; i<=3 ; i++){

    printf("Enter account ,limit ,balance\n");

    scanf("%d%f%f",&account ,&limit ,&balance);

    newlim = limit /2;
    printf("the new credit limit for account %f\n ",newlim,limit);

     if(balance > newlim){

        printf("customers have current balances exceeded his new credit limits\n.",account);
     }
     }


         return 0;
}
