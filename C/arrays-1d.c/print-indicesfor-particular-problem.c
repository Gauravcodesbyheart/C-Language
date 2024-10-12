   // given an array of marks of students, if the marks of any student is less than 35 then print it's roll no. 
   // {roll no. here refers to the index of the array}

#include <stdio.h>
int main ()
{
   int arr [10] = {95,90,31,25,100,50,65,89,97,30};
   for (int i=0; i<=9; i++)
   {
    if (arr[i]<35)
    {
       printf("%d  ",i);
    }
   } 
   return 0;
}