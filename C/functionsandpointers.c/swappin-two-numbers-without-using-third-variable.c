#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the number of rows:\n");
    scanf("%d",&a);
    int b;
    printf("ENter the second number:\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the value of first number is %d",a);
    printf("After swapping the value of second number is %d", b);
    return 0;
}