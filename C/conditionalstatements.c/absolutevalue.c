#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number for which you want absolute value:\n");
    scanf("%d",&n);
    if (n<0)
    {
     n = n*(-1);
    }
    printf("The absolute value of the number is:\n %d",n);
    return 0;
}