#include <stdio.h>
void greet (int n)
{   
    if (n == 0) return;
    printf("Good morning\n");
    greet (n-1);
    return; 
}
int main ()
{
    int n; 
    printf("Enter the number of times you want to greet user:\n");
    scanf("%d",&n);
    greet (n);
    return 0;
}