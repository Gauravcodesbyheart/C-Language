#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            continue;  // yaha continue karne se wo part hatt waha 
                        //    jo 2 se divisible nahi hai yane wo print nahi hoga
        }
        printf("%d ", i);
    }
   return 0;
}