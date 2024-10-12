#include <stdio.h>
int main ()
{
    int cp;
    printf("Enter the cost price:\n");
    scanf("%d",&cp);
    int sp;
    printf("Enter the selling price:\n");
    scanf("%d",&sp);
    if (cp>sp)
    {
        printf("Loss");
    }
    else if  (sp>cp)
    {
        printf("Profit");
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
    

} 