#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the number you want:\n");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int sum = 1;
    for ( i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("the %d nth fibonacci number is %d",i,sum);    
    }
    
    return 0;
}