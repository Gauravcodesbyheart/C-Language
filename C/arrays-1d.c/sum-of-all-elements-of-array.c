#include <Stdio.h>
int main ()
{
    int arr[5]= {1,2,3,4,5};
    int sum = 0;
    for (int i=0; i<=4; i++)
    {
        sum =sum +arr[i]; 
    }
    printf("The sum of all elements of the array is %d\n",sum);
    return 0;
}