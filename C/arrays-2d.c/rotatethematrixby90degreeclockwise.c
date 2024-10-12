#include <stdio.h>
int main()
{
    int r1, c1, r2, c2, r3, c3;
    printf("Enter the number of rows and columns  for matrix 1:\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns  for matrix 2:\n");
    scanf("%d %d", &r2, &c2);
    int arr[r1][c1];
    int brr[r2][c2];
    if (c1 == r2)
    {
        printf("Matrix multiplication is possible\n");
        printf("Enter the elements of the first matrix :\n");
        r3 = r1;
        c3 = c2;
        int res[r3][c3];
        int cr=c1;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &arr[i][j]);
            }
            printf("\n");
        }
        printf("Enter the elements of matrix 2:\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &brr[i][j]);
            }
            printf("\n");
        }
        for (int i=0; i<r1; i++)
        {
            for (int j=0; j<c2; j++)
            {     
                  res [i][j] = 0;
                  for (int k=0; k<cr; k++)
                  {
                    res[i][j] = res [i][j] + arr[i][k]*brr[k][j];
                  }
            }
        }       
        for (int i=0; i<r1; i++)
        {
            for (int j=0 ; j<c2; j++)
            {
                printf(" %d ",res[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("Matrix multiplication is not possible\n");
        printf("Please input in such a way that row of first matrix is equal to column of second matrix");
    }

    return 0;
}