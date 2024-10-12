#include <stdio.h>
int main ()
{   
    int i;
    int arr[5] = { 1,2,3,4,5};
    int max = arr[0];
    for (i=0; i<=4; i++)
    {
        if (max < arr[i])
        max= arr[i];
    }
    printf("The maximum number among all elements of the array is %d",arr[i]);
    return 0;
}