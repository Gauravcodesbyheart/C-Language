#include <stdio.h>
int min (int a,int b)
{
    if (a<b)
    return a;
    else  
    return b;
}
int hcf(int a, int b)
{   int gcd;
    for (int i=1; i<=min(a,b); i++)
    {   
        if (a%i==0 && b%i==0)
        gcd=i;
        
    }
    return gcd;
}

int main ()
{
    int a;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    int b;
    printf("Enter the second number :\n");
    scanf("%d",&b);
    int answer=hcf(a,b);
    printf("The hcf of the given two numbers will be:%d",answer);
    return 0;
}