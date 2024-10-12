#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number of terms upto which you want sum of this seies:\n");
    printf("1 -2 +3 -4 +5....... upto n terms\n");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("The sum is: %d",-n/2);
    }
    else
    {
        printf("The sum is %d",(-n/2)+n);
    }
    return 0;

}