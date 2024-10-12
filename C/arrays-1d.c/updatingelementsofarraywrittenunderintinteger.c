#include <stdio.h>
int main ()
{
  int arr [5] = { 2,4,6,8,1};    // arr[4]=1
  arr [4]= 100;
  arr[1]= 1;
  printf("%d",arr[4]);   // value of arr[4] will be updates to 100 earlier it was 4  
  return 0;
}