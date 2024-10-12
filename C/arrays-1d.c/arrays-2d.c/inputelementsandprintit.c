#include <stdio.h>
int main ()
{
    int arr[3][3];
    int i,j;
    printf("Enter the elments of array:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
           scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("The elements of the given array are:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}