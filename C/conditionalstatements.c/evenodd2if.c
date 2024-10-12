#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("The numbered you entered is even number");
    }
    if (n%2!=0)
    {
        printf("The number you entered is odd number");
    }
    return 0;
}