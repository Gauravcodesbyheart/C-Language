#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int max = INT_MIN;
    int smax = INT_MIN;
    int count = 0;
    for (int i = 0; i <= 7; i++)
    {
        if (arr[i] > max)
        {
         max=arr[i];     
        }
    }
    for (int i=0; i<=7; i++)
    {
        if (smax < arr[i] && arr[i]!=max)
        {
            smax=arr[i];
        }
    }
    printf("%d is the second largest number in the given array",smax);
    return 0;
}