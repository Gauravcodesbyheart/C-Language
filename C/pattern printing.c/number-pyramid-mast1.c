#include <stdio.h>
int main()
{
    int n;
    printf("Enter the  number of rows:\n");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("%d",i);
    }
    printf("\n");
    int nst = n;
    int nsp = 1;
    int nxtnst = n;
      
    for (int q = 1; q <= n; q++)
    {   int a=1;
        for (int k = 1; k <= nst; k++)
        {
            printf("%d",a);
            a++;
        }

        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("%d",a);
            a++;
        }
        nst--;
        nsp=nsp+2;
        printf("\n");
    }
    return 0;
}