#include <stdio.h>
void decreasing (int n) 
{    
    if (n==0) return;
    printf("%d\n",n);
    decreasing (n-1);
    return;
}
int main ()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("The number from %d to 1 is as folow :\n",n);
    decreasing (n);
    return 0;
}