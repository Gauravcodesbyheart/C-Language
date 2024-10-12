#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d", &n);
    int m;
    printf("Enter the number of columns:\n");
    scanf("%d", &m);
    int arr[n][m];
    printf("Enter the elements of the matrix:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++) // here swapping is used to transpose of matrix as the matrix is not square matrix
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}