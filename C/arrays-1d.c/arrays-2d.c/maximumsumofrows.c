#include <stdio.h>
int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int sum;
    int maxsumrow = 0;
    int maxsumrownum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = 0; 
            sum += arr[i][j];
        }
        if (sum > maxsumrow)
        {
            maxsumrow = sum;
            maxsumrownum = i;
        }
    }
    printf("The maximum sum of elements in the row is %d", maxsumrow);
    printf("\nThe row having maximum sum of elements is %d", maxsumrownum); 
    return 0;
}