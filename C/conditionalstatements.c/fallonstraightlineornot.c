#include <stdio.h>
int main ()
{
    float x1,x2,x3,y1,y2,y3,m,n;
    printf("Enter x1:\n");
    scanf("%d",&x1);
    printf("Enter x2:\n");
    scanf("%d",&x2);
     printf("Enter x3:\n");
    scanf("%d",&x3);
    printf("Enter y1:\n");
    scanf("%d",&y1);
    printf("Enter y2:\n");
    scanf("%d",&y2);
    printf("Enter y3:\n");
    scanf("%d",&y3);
    m = (y2-y1)/(x2-x1);
    n = (y3-y2)/(x3-x2);
    if ( m== n )
    {
        printf("They form straight line\n");
    }
    else 
    {
        printf("They do not form any straight line \n");
    }
    return 0;
    
}