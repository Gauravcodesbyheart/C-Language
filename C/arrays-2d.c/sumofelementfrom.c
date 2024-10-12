#include <stdio.h>
int main ()
{
    int arr[4][5]={{1,2,3,4,5},{5,6,7,8,9},{4,7,8,9,3},{3,2,6,5,7}};
    int sum=0;
    for (int i=0; i<2;i++)
    {
        for (int j=0; j<4;j++) 
        {
         sum= sum+arr[i][j];
        }
    }
    printf("The sum elements from given set of row and columns to another rows and columnsis %d",sum);
    return 0;
}