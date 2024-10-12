#include <stdio.h>
int main ()
{   
    char str [] = "physicswallah";//declaration without giving size is the best way as doing so never results into the error
    printf(" Your choosen string element is %c",str[5]);
    return 0;
}