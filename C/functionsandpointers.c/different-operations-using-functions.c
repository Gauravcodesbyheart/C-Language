#include <stdio.h>
int add(int a, int b)
{
    return a+b;
}
int substract(int a, int b)
{
    return a-b;
}
int multiply(int a, int b)
{
    return a*b;
}
int main ()
{
    int a; 
    printf("Enter the first number:\n");
    scanf("%d",&a);
    int b; 
    printf("Enter the second number:\n");
    scanf("%d",&b);
    int sum = add(a,b);
    int difference = substract(a,b);
    int product = multiply(a,b);
    printf("The sum of two numbers is %d\n", sum);
    printf("The sum of two numbers is %d\n", difference);
    printf("The sum of two numbers is %d\n", product);
    return 0;

}