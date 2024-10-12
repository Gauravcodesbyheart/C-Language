#include <stdio.h>
int main ()
{   
    int r;
    printf("Enter the number of rows:\n");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns:\n");
    scanf("%d",&c);
    printf("Enter the elements of the array:\n");
    int arr[r][c];
    for (int i=0;i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for (int i=0;i<c;i++)
    {
        for (int j=0; j<r; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}