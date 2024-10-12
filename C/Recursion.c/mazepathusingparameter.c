#include <stdio.h>
int maze(int n, int m)
{
    int rightwards = 0;
    int downwards = 0;
    if (n == 1 && m == 1)
    return 1;
    if (n == 1)
    {
    rightwards += maze(n, m - 1);
    }
    if (m == 1)
    {
    downwards += maze(n - 1, m);
    }
    if (n > 1 && m > 1)
    {
    rightwards += maze(n, m - 1);
    downwards += maze(n - 1, m);
    }
    int recAns = rightwards + downwards;
}
int main()
{
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d", &n);
    int m;
    printf("Enter the number of columns:\n");
    scanf("%d", &m);
    int ways = maze(n, m);
    printf("The total no. of ways is %d", ways);
    return 0;
}