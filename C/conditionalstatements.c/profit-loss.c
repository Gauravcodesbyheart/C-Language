#include <stdio.h>
int main ()
{
    int cp;
    printf("Enter the cost price:\n");
    scanf("%d",&cp);
    int sp;
    printf("Enter the selling price:\n");                     // here in this piece of code you can clearly  
    scanf("%d",&sp);                                        // you can see there is  error as if there is 
    int p = sp-cp;                         // sp=cp then also then also loss will reflect 
    int l = cp-sp;                    // as else wil cover akk conditions other than sp.cp
    if ( sp>cp)                      // else also covers cp>= sp also covered
    {   
    printf("As per above data you are in profit and you made profit of %d",p);
    }
    else
    {
    printf("As per above data you are in loss and you made loss of %d",l);
    }
    return 0;
}    