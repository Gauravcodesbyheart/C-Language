#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number you want:\n");
    scanf("%d", &n);
    int n1=n;
    int r = 0;
    while (n != 0)
    {  
        r = r * 10;
        r = r + (n % 10);
        n = n /10;
    }
    printf("The sum of given number and revershed of it is  %d",r+n1);
    return 0;
}