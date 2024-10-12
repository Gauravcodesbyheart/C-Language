#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <= 7; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
        
    }
    printf("The %d is the  second largest element of the array:", smax);
    return 0;
}