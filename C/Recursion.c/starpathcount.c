#include <stdio.h>
int stairs (int n)

{  
    if (n==1 || n==2) return n;
    int totalways = stairs(n-1)+stairs(n-2);
    return totalways; 
}
int main ()
{
    int n;
    printf("Enter the number of stairs:\n");
    scanf("%d",&n);
    int ways = stairs(n);
    printf("The total nuber of ways so that you can climb on %d number of stairs are %d",n,ways);
    return 0;
}