#include <stdio.h>
int swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a;
    return b;              // here is not possible as here pass vy value is used 
}
int main ()
{   
    int a;
    printf("enter the first number:\n");
    scanf("%d",&a);
    int b;
    printf("Enter the second number:\n");
    scanf("%d",&b);
    int swpping = swap (a,b);
    printf("After swapping the value of first number is %d",a);
    printf("ater swapping the value of second number is %d",b);
    return 0;
}