#include <stdio.h>
int main ()
{
    int r,c,i,j;
    printf("Enter the no. of rows:\n");
    scanf("%d",&r);
    printf("Enter the no. of columns:\n");
    scanf("%d",&c);
    int arr[r][c];     // it should be kept in mind that during declaration array never leave vacnt to the column 
    printf("Enter the elements of array:\n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
         scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The inputted elements of the given array are:\n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
         printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}