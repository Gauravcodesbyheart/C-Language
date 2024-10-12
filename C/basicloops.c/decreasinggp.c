#include <stdio.h>
int main ()
{            // print this series 100 50 25 ...... n terms
    int i,n;
    float a;
    printf("Enter the number of terms you want to print:\n"); // for gp just multiply the term each time with common ratio   
    scanf("%d",&n);
    a=100;
    for (i=1; i<=n; i++)
    {
    printf("%f ",a);
    a= a*1/2;
    }
    return 0;
}