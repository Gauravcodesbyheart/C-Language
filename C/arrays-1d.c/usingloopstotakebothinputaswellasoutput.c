#include <stdio.h>
int main ()
{
  int arr [5];
  for (int i=0; i<=4; i++)                             // for lop for input
  {
  printf("Enter the %d element of the array:\n",i+1);
  scanf("%d",&arr[i]);
  }
  printf("The elements of array are:\n");
  for (int i=0; i<=4; i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}