#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 100)
    {
        printf("%d", i); // here loop converted as value of i 
        i--;                //decreased every times by 1 so it kept decresing 
                         //and is also lesser than 100 so infinite loo
        
    }
    return 0;
}