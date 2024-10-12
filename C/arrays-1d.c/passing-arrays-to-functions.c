#include <stdio.h>
void passarr (int arr[])
{
    arr[0]= 6;
    return ;
}

int main ()
{
    int arr[5] = {200,-56,78,98,100};
    printf("Befoe calling the function the value will be element 0 will be  %d\n",arr[0]);
    passarr ( arr );
    printf("After calling the function the value of element 0 will be %d\n",arr[0]);
    return 0;
}