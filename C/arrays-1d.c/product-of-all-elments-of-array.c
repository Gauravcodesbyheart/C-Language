#include <stdio.h>
int main ()
{
    int arr[5]= {55,6,7,89,90};
    int product = 1;
     for ( int i=0; i<=4; i++)
     {
        product = product *arr[i];
     }
     printf("The product of all elements of array is: %d", product);
     return 0;

}