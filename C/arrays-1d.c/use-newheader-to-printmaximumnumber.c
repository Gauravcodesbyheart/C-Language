#include <stdio.h>
#include <limits.h>
int main () 
{
 int arr[5]= {5,1000,9,-234,867};
 int max = INT_MIN; 
 for (int i=0; i<=4; i++)
 {
   if (max < arr[i]) max = arr[i]; 
 }
 printf("The greatest element is %d",max);
 return 0;
}