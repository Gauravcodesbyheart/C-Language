#include <stdio.h>
int main ()
{   int i;
    int arr[7] ={1,205,3,4,50,67,88};
    int x=50;
    int count = 0;
    for ( i=0; i<=6; i++)
    {
        if (arr[i]>x) 
        {
            printf("%d\n",arr[i]);
            count++;
        }

    }
    printf("The number greater than the given number 50 is %d",count);
    return 0;
}