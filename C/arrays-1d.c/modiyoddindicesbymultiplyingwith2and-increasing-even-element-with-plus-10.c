#include <stdio.h>
int main ()
{   
    int arr[8]= {1,2,3,4,5,6,7,8};
    for (int i=0; i<=7; i++)
    {
       if (arr[i]%2!=0)
       {
        arr[i]= arr[i]*2;
       } 
       else 
       {
        arr[i] = arr[i]+10;     
       }
    }
    for (int i=0;i<=7;i++)
    {
      printf("The %d element of the array is %d\n",i, arr[i]);
    }
    return 0;
}