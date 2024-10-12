#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    int b;
    printf("Enter the number:\n");
    scanf("%d",&b);
    int c;
    printf("Enter the number:\n");
    scanf("%d",&c);
    if (a>b)
    {
        if(a>c)
        {
            printf("The number %d is greatest number",a);
        }
        else
        {
            printf("The number %d is greatest number",c);
        }
    }
    else // b > a
        {
            if (b>c)
            {
                printf("The number %d is greatest number",b);
            }
            else
            {
                printf("The number %d is greatest number",c);
            }   

            }

}