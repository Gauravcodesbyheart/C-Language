#include <stdio.h>
int main ()
{
   float x;
   printf("Enter the number:\n");
   scanf("%f",&x);   // float data type ka input liye
   int y;           // decimal wale no. ko integer value me change karne ke liye
   y = x;           // ek variable declare kara 
   float z = x - y;  // again float variable declare kara so that decimal output can be printed
                    // 
   printf("Fractional part of the number will be %f",z);
   return 0;


}