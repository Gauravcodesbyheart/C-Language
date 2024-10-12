#include<stdio.h>
int sum (int n)
{   if (n==0|| n==1 ) return n;
    int recAns = n+sum(n-1);
    return recAns;
}
int main ()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int add = sum(n);
    printf("The addition upto  1 to %d is %d",n,add);
    return 0;
}