#include <stdio.h>
int main()
{
    int i, j;
    int arr[3][3] = {{1, 2, 3},{ 4, 5, 6}, {7, 8, 9}};
    int max = arr[0][0];
    int idxmaxelem[2];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                 max= arr[i][j];
                idxmaxelem[0]=i;
                idxmaxelem[1]=j;
            }
        }
    }
    printf(" %d is the maximum element of the array:\n",max);
    printf("The indices of the maximum element is (%d , %d)",idxmaxelem[0],idxmaxelem[1]);
    return 0;
}