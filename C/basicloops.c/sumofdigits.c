#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number you want:\n");
    scanf("%d", &n);
    int sum = 0;
    while (n != 0)
    {
        int ld = n % 10;  //here by doing we get last digit in form of remainder 
        sum = sum + ld;
        n = n / 10;
    }
    printf("The sum of digits is %d\n", sum);
    return 0;
}