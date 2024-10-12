#include <stdio.h>
void  zigzag( int n)
{   
    if (n==0) return;                                                                                                                                                                           
    printf("%d",n);    // code
    zigzag (n-1);         // call
    printf("%d",n);   // code 
    zigzag (n-1);         // call
    printf("%d",n);   // code 
    return;
}
int main ()
{   
    int n;
    printf("Enter the number :\n");
    scanf("%d",&n);
    zigzag (n);
    return 0;
}