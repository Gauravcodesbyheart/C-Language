#include <stdio.h>
int main()
{
    int n;
    printf("Enter the  number of rows:\n");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("*");
    }
    printf("\n");
    int nst = n;
    int nsp = 1;
    int nxtnst = n;
    for (int q = 1; q <= n; q++)
    {
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }

        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        nsp = nsp + 2;
        for (int l = 1; l <= nst; l++)
        {
            printf("*");
        }
        nst--;
        printf("\n");
    }
    return 0;
}