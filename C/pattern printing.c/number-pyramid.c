#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d", &n);
    int nsp = n - 1;
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        nsp--;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", j);
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}