#include <stdio.h>
int main ()
{   int r,c,i,j;
    printf("Enter the no. of rows of matrices\n");
    scanf("%d",&r);
    printf("Enter the number of columns of matrices\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the roll no. and marks of students in each subject\n");
    for ( i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("The roll no. and the marks of the each subject is:\n");
    for ( i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}