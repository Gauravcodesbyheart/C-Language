#include <stdio.h>
int main()
{
    int n, ld, sum;
    printf("Enter the number:\n");
    scanf("%d", &n);
    sum = 0;
    while (n != 0)
    {
        ld = n % 10;
        if (ld % 2 == 0)
            sum = sum + ld;
        else
            sum = sum + 0;
        n = n / 10;
    }
    printf("The sum ofeven numbers of digit is %d", sum);
    return 0;
}