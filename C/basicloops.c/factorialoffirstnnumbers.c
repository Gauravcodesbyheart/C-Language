#include <stdio.h>
int main ()
{
    int i,n,fact;
    printf("Enter the number for which you want factorial:\n");
    scanf("%d",&n);
    fact = 1;
    for (i=1; i<=n; i++)
    {
        fact=fact*i;
        printf("The factorial of  %d number is: %d\n",i,fact);
    }
    return 0;
}
