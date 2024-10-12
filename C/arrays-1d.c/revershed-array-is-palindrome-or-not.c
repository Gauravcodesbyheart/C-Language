#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    int brr[5];
    for (int i = 0; i <= 4; i++)
    {
        brr[i] = arr[4 - i];
    }
    int count = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] != brr[i])
            count = 1;
    }
    if (count == 0)
    {
        printf("The given  array is an palindrome");
    }
    else
    {
        printf("The given array is not an palindrome");
    }
    return 0;
}