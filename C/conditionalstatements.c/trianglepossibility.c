#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the first side of traingle:\n");
    scanf("%d",&a);
    int b;
    printf("Enter the second side of traingle:\n");
    scanf("%d",&b);
    int c;
    printf("Enter the third side of traingle:\n");
    scanf("%d",&c);
    if (a+b>c && b+c>a && c+a>b)
    {
        printf("The sides you entered can form a traingle:\n");
    }
    else 
    {
        printf("the sides u entered can't form a trainle:\n");
    }
    return 0;
}