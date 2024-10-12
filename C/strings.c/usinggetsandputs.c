#include <stdio.h>
#include <string.h>
int main ()
{
    int str [40];
    scanf("%[^\n]s",str);  
    printf("Your input was : %s",str);
    return 0;
}