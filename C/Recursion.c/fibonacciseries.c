#include <stdio.h>
int fibonacci(int n)
{
    if (n==1 || n==2) return 1;
    int ans1 = fibonacci(n-1);
    int ans2 = fibonacci (n-2);
    int ans = ans1 + ans2 ;
    return ans;

}
int main ()
{
    int n; 
    printf("Entr the number you want:\n");
    scanf("%d",&n);
    int fibo = fibonacci(n);
    printf("The %dth fibonacci term of the series is : %d",n,fibo);
    return 0;
}