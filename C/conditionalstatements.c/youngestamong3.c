#include <stdio.h>
int main ()
{
    int r;
    printf("Enter the age of Ram:\n");
    scanf("%d",&r);
    int s;
    printf("Enter the age of Shyam:\n");
    scanf("%d",&s);
    int a;
    printf("Enter the age of Ajay:\n");
    scanf("%d",&a);
    if (r<s && r<a)
    {
        printf("Ram is the youngest:\n");
    }
    if (s<r && s<a)
    {
        printf("Shyam is the youngest:\n");
    }
    if(a<r && a<s)
    {
        printf("Ajay is the youngest:\n");
    }
    return 0;

}