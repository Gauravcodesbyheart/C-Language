#include <stdio.h>
int main()
{ // 100 97 94 91.......
    int i;
         /*An= 100+(n-1)-3, 100-3n+3, 103-3n, 103-3n>0, 103/3>n, n<34.5 so n=34 */
    int a = 100;
    for (i = 1; i <= 34; i++) // loop 34 times run karega iskaye matlab kadapi    nahi hai ki i<34 hoga
    {                         // on running loops 34 times a value continuously decrease  and till 34 terms it is positive
        printf("%d ", a);
        a = a - 3;
    }
    return 0;
}