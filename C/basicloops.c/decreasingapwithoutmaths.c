#include <stdio.h>
int main ()
{      // print this series---> 100 97 94 91....... till Anth tern will be positive
    int i,a;
    a=100;
    for (i=1; a>0; i++ )
    {
        printf("%d  ",a);
        a= a-3;
    }
    return 0;

}