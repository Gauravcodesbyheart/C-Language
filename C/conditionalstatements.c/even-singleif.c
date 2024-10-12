#include <stdio.h>
int main ()
{ 
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if ( n%2==0 )
    {
        printf("the number you entered is even number.");
    }
    return 0;
}