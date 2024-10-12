#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if (n % 5 == 0)    // pahle iss condition ko check karega then next
    {                  // if upar wala code sahi hua then niche wala implement hoga 
        if (n % 3 == 0)    // agar ye bhi sahi hua then ye work karega either iss 
        {                  // if condition ke andar ka ekse statement work karega
            printf("The number is divisible by 5 and 3");
        }
        else
        {
            printf("The number is not divisible by 5 and 3");
        }
      // agar 5 divisible wala condition satisfy nahi hua then niche wala work karega
    }
    else 
    {
    printf("the number is not divisible by 5 and 3");
    }
    return 0;  
}