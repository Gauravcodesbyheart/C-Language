#include <stdio.h>
void newarr(int arr[])    // here it shown that passarr have parameter of array named arr[]
{
   int temp;
 temp = arr[0];
 arr[0] = arr[1];
 arr[1] = temp;
 return;
}
int main ()
{
   int arr[2]={5,10};  
   printf(" Before calling the function the value of 1 will be %d and elemnt 2 will be %d\n",arr[0],arr[1]);
   newarr(arr);
   printf(" after calling the function the value of event 1  will be %d and event 2 will be %d\n",arr[0], arr[1]);
   return 0;
}