#include <stdio.h>
int main()
{
    int a;
    printf("Enter first number:\n");
    scanf("%d", &a);
    int b;
    printf("Enter second number:\n");
    scanf("%d", &b);
    int c;
    printf("Enter third number:\n");
    scanf("%d", &c);
    int d;
    printf("Enter fourth number:\n");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is the greatest", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("%d is the greaest", c);
    }
    if (d > a && d > b && d > c)
    {
        printf("%d is the greatest", d);
    }
    return 0;
}