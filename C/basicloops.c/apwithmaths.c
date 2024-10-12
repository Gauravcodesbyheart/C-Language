#include <stdio.h>
int main ()    // print this series upto n numbers -- 1 3 5 7 9
{
    int i,n;
    printf("Enter the number:\n");      // An= a+(n-1)d
    scanf("%d",&n);                     // here, 1+(n-1)2       
    for (i=1; i<=2*n-1 ; i= i+2)              // 1+ 2n-2
    {                                  // An= 2n-1
     printf("%d\n",i);  
    } 
    return 0;
}