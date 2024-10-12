#include <stdio.h>
int main()
{
    int count, n;
    printf("Enter the number you want:\n");
    scanf("%d", &n);
    count = 0;  //value of count assigned  here 0 first 
    while (n != 0)  //jab tak n ka value 0 nahi ho jaa raha tak jabwhole ke andar wala task hoga  
    {
        n = n / 10;  // har step me ek ek digit eliminate ho raha hai 
        count++;      // count will increse by
    }
    printf("the no of digits is %d", count);
    return 0;
}
