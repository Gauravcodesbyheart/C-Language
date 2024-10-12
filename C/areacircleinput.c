#include <stdio.h>
int main ()
{
    float radius,area;
    printf("Enter the Radius of the circle:\n");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("Area of circle with radius %f is %f is :\n",radius, area);
    return 0;
    

}