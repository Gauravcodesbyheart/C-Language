#include <stdio.h>
int power(int a, int b)
{   
    if (b == 0) return 1;
    int recAns = a*power(a,b-1);
    return recAns;
}

int main () 
{
    int a; 
    printf("Enter the base number:\n");
    scanf("%d",&a);
    int b; 
    printf("Enter the exponent:\n");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d raised to the power of %d is %d",a,b,p);
    return 0;

}
