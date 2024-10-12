#include <stdio.h>
int main ()
{
    int r;
    printf("Enter the number of rows:\n");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns:\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of the array:\n");
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j=0; j<c; j++)
            {
                printf("%d",arr[i][j]);
            }
        }
        else 
        {
            for (int j=c-1; j>=0; j--)
            {
                printf("%d",arr[i][j]);
            }
        }
        printf("\n");
    }
return 0;
}