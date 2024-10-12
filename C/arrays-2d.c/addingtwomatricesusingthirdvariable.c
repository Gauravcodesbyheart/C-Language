#include <stdio.h>
int main ()
{   
    int r1,r2,r3,c1,c2,c3,i,j;
    printf("Enter the no of row of first matirx\n");
    scanf("%d",&r1);
    printf("Enter the no of columns of first matirx\n");
    scanf("%d",&c1);
    printf("Enter the no of row of second matirx\n");
    scanf("%d",&r2);
    printf("Enter the no of columns of second matirx\n");
    scanf("%d",&c2);
    printf("Enter the no of row of third matirx\n");
    scanf("%d",&r3);
    printf("Enter the no of columns of third  matirx\n");
    scanf("%d",&c3);
    int arr[r1][c1];
    int brr[r2][c2];
    int res[r3][c3];
    if (r1==r2 && c1==c2)
    {
     printf("Addition is possible\n");
    }
    else 
    {
     printf("Addition is not possible\n");   
    }
    printf(" Enter the elements of first matrix are:\n");
    for (i=0; i<r1;i++)
    {
        for (j=0; j<c1;j++)
        {
         scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of second  matrix are:\n");
    for (i=0; i<r2;i++)
    {
        for (j=0; j<c2;j++)
        {
         scanf("%d",&brr[i][j]);
        }
        printf("\n");
    }
    printf("The sum of matrix 1 and 2 are:\n");
    for (i=0; i<r3;i++)
    {
        for (j=0; j<c3;j++)
        {
         res[i][j]=arr[i][j]+brr[i][j];
        }
        printf("\n");
    }
    for (i=0; i<r3;i++)
    {
        for (j=0; j<c3;j++)
        {
         printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}