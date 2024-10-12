#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if (n%5==0)
        printf("The numbered you entered is divisible by 5"); // if there is single if- else condition is
    else                                                   // to be used then there is not needed mandatoraly 
        printf("The number you entered is not divisible by 5"); // put second bracket for reiting code 
    return 0;
} 

