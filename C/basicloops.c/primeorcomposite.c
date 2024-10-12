#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number as per your choice:\n");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
        if (a==0)
        {
            printf("The number you entered %d is prime number",n);
        }
        else 
        {
            printf("The number you entered %d is composite number",n);
        }
        return 0;
}