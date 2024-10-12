#include <stdio.h>
int main ()
{ int n;
printf("Enter the number that much times you want to print stars :\n");
scanf("%d",&n);
for (int i=1; i<=n; i++)
{
    printf("*");
}
return 0;
}