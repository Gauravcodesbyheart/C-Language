#include <stdio.h>
#include <math.h>
int main ()
{
    int n; 
    printf("Enter the number :\n");
    scanf("%d",&n);
    int  root = sqrt (n);                             // square root of number
    int power = pow(n,5);                             // finding the value of base raised to the power of 5   
    printf("The square root of the number is %d\n",root);
    printf("The power of the number entered by you is %d\n",power);
    return 0;
}