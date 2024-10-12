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
    if (r>s)              // r is out of the race
    {
        if (s>a)
        {
            printf("Ajay is the youngest among 3 students");
        }
        else 
        {
            printf("Shyam is the youngest among 3 students");
        }
    }
    else               // s > r -- s is now out of race 
    { 
        if (r>a)
        {
            printf("Ajay is the youngest among 3 students");
        }
        else
        {
            printf("Ram is the youngest among 3 students");
        }              


    }
}