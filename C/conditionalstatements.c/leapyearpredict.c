#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the year:\n");
    scanf("%d",&n);
    if (n%4==0)
    {
        printf("The year you entered %d is leap year\n",n);
    }
    else
    {
        printf("The year you entered %d is not leap year\n",n);
    }
    return 0;
}