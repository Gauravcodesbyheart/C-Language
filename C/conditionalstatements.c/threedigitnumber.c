#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if (n>99 && n<1000)   // && is used for taking intersectioon over both statements.
    {
    printf("The number you entered is a three digit number:\n");
    }
    else 
    {
    printf("The number you entered is not three digit number:\n");
    }
    return 0;
}