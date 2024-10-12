#include <stdio.h>
int main ()
{
    int l;
    printf("Enter the length of the rectangle:\n");
    scanf("%d",&l);
    int b;
    printf("Enter the breadth of the rectangle:\n");
    scanf("%d",&b);
    int a = l*b;
    int p = 2*(l+b);
    if (a>p)
    {
        printf("Area is greater than perimeter");
    }
    if (p>a)
    {
        printf("Perimeter is greater than area");
    }
    if (a==p)
    {
        printf("Area is equal to perimeter");
    }
}