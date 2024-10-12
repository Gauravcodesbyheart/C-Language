#include <stdio.h>
int main ()
{
    float p,r,t;
    printf("Enter the principal:\n");
    scanf("%f",&p);
    printf("Enter the rate:\n");
    scanf("%f",&r);
    printf("Enter the time:\n");
    scanf("%f",&t);
    float si = p*r*t/100;
    printf("The simple interest for principal %f rate %f time %f is %f:\n",p,r,t,si);
    return 0;

}