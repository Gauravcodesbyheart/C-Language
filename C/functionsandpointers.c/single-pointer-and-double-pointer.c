#include <stdio.h>
int main ()
{
    int a=25;
    int *x= &a;
    int **y = &x;   // double pointer is used to store value of pointer
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    return 0;
}