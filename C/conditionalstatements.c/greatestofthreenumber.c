#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    int b;
    printf("Enter the second number:\n");
    scanf("%d",&b);
    int c;
    printf("Enter the third number:\n");
    scanf("%d",&c);
    if ( a>b && a>c)
    {
        printf(" first number is the greatest number i.e. %d",a);
    }
    if ( b>c && b>a)
    {
        printf("second number is the greatest number i.e. %d",b);
    }
    if (c>a && c>b)
    {
        printf("third number is the greatest number i.e.  %d",c);
    }
    return 0;
}