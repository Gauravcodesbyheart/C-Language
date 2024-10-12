#include <stdio.h>
int main ()
{
    int arr[5][5];
    printf("Enter the elements of array:\n");
    for (int i= 0; i<5; i++ )
    {
        for (int j=0; j<5; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("The elements of the given arrays are :\n");
    for (int i= 0; i<5; i++ )
    {
        for (int j=0; j<5; j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}