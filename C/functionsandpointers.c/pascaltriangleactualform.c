#include <stdio.h>
int factorial(int x)
{
    int fact=1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr = factorial(n)/(factorial(r)*factorial(n-r)); 
    return ncr;
}
int main()
{
    int n,i,j,k;
    printf("enter the number of rows:\n");
    scanf("%d", &n);
    int nsp=n-1;
    int nst=1;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= nsp; j++)
        {
            printf(" ");
        }
        nsp--;
        for (k = 0; k <= nst-1; k++)
        {
            int ick = combination(i,k);
            printf("%d ", ick);
        }
        nst++;
        printf("\n");
    }
    return 0;

}