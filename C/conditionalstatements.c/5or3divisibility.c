#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if (n%3==0 || n%5==0)
    {
    printf("The number you entered is divisible by 3 or 5");
    }
    else
    {
    printf("The number you entered is not divisible by 3 or 5");
    }
    return 0;
}