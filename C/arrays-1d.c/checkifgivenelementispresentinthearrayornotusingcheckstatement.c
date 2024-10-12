#include <stdio.h>
int main()
{
    int check = 0;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x = 5;
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] == x)
        {
            check = 1;
            break;
        }
    }
    if (check = 1)
        printf("The given element lies in the array");
    else
        printf("The given element not lies in the array");
    return 0;
}