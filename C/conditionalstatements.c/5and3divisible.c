#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if (n%3==0 && n%5==0)
    {
        printf("The number you entered is divisible by both 3 and 5");
    }
    else 
    {
       printf("The number you entered is not divisible by both 3 and 5");
    }
    return 0;
}