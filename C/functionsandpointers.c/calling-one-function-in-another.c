#include <stdio.h>
void england()
{
    printf("you are in England\n");
    return ;
}
void australia()
{
    printf("you are in Australia\n");
    england();                             // examples without return type 
    return ;
}
void india()
{
    printf("you are in india\n");
    australia();
    return ;
}
int main ()
{
    india();
    return 0;
}