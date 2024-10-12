#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the first mnumber:\n");
    scanf("%d",&a);
    int b;
    printf("Enter the the second number:\n");
    scanf("%d",&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The value of first number is %d\n",a);
    printf("The value of seconf number is %d\n",b);
    return 0;
}