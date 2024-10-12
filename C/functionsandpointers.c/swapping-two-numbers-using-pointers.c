#include <stdio.h>
void swap (int *x , int *y) 
{
    int temp;
    temp = *x;
    *x=*y;
    *y= temp;
    return ;
}
int main ()
{
    int a;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    int b;
    printf("Enter the second number:\n");
    scanf("%d",&b);
    swap (&a,&b);
    printf("The value of first number is %d\n",a);
    printf("The value of second number is %d\n",b);
    return 0;
}