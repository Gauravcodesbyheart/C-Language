//  print  this series upto n numbers ---- 1 3 5 7 9 ..... n times
#include <stdio.h>
int main ()
{
    int i,n,a;
    printf("Enter the number that much terms you want:\n");
    scanf("%d",&n);
    a = 1;                // here a is stored as 1
    for (i=0; i<=n; i++)       
    {
        printf("%d ",a);       // in round 1 of loop a=1 will be printed 
        a= a+3;              // value of a is increased to 3 
    }
    return 0;
} 