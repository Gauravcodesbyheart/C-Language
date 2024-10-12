#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the Dividend:\n");
    scanf("%d",&a);
    int b;
    printf("Enter the Divisor:\n");    // keep in mind a must be greater from b
    scanf("%d",&b);
    int r,q;
    q=a/b;
    r=a-b*q;
    printf("The remainder will be %d when %d is divided by %d", r,a,b);
    return 0;
}