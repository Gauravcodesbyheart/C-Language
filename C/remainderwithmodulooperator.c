#include <stdio.h>
int main ( )
    {
      int a,b,c;
      printf("Enter the dividend:\n");
      scanf("%d",&a);
      printf("Enter the divisor:\n");
      scanf("%d",&b);
      c= a % b;   /* we will get valid remainder only when a > b*/
                  /* if a < b then output will be always a */
      printf("The remainder will be %d when dividend %d will be divided by divisor %d",c,a,b);
      return 0;

    }
