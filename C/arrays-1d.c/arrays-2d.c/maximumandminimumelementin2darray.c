#include <stdio.h>
int main ()
{   
    int n,m,i,j;
    printf("Enter the number of rows and number of columns :\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter the elements of the array:\n");
    for (i=0; i<n; i++)
    {
       for (j=0; j<m; j++)
       {
        scanf("%d",&arr[i][j]);
       }
       printf("\n");
    } 
    int min = arr[0][0];
    int max = arr[0][0];
    for (i=0; i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if ( arr[i][j]> max)
            {
             max=arr[i][j];
            }
            else if (arr[i][j] < min) 
            {
             min = arr[i][j];   
            }
        }
    }
    printf("The greatest element of the array is %d and the smallest element is %d",max,min);
    return 0;
}