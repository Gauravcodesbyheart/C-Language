#include <stdio.h>
int powerlog (int a, int b)
{
    if (b==0) return 1;
    if (b==1) return a;
    int x = powerlog (a,b/2);
    if (b % 2 == 0)
    return x*x;
    else 
    return x*x*a; 
}
int main ()
{
    int a;
    printf("Enter the base number:\n");
    scanf("%d",&a);
    int b;
    printf("Enter the exponent for %d\n",a);
    scanf("%d",&b);
    int p = powerlog(a,b);
    printf("The %d raised to the  %d is %d",a,b,p);
    return 0;
}