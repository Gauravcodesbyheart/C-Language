#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:\n");//   1
    scanf("%d", &n);                      //   A B
    for (int i = 1; i <= n; i++)          //   1 2 3
    {                                     //   A B C D
        int a = 1;                        //   A B C D
        for (int j = 1; j <= i; j++)      //   1 2 3 4 5
        {
            int d = a + 64;
            char ch = (char)d;
            a++;
            
            if (i % 2 == 0)
            {
                printf("%c", ch);
            }
            else
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}