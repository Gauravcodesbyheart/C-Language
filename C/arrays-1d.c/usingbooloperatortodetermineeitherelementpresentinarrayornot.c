#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x = 8;
    bool flag = false;
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            break;
        }
    }
    if (flag == true )
    {
        printf("The given element is present in the array");
    }
    else 
    {
        printf("The given element is not present in the array");
    }
    return 0;
}