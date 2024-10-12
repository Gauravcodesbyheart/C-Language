#include <stdio.h>
int main ()
{
int a =5;
int* x = &a;           // int pointer x means it stores value of a i.e, address of a ( &a )             
printf("%p\n",x);
printf("%p\n",&x);     // %p is used to print address of x
printf("%d\n",*x);     // pointer x ke andar jiss bhi vriable ka value stored hai uss variable ko point karo and uss ke andar jo 
                    // value hai usko print karo.....
return 0;
}
