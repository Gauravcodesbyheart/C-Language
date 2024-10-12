#include <stdio.h>
int main ()
{
    int arr[5]= {1,3,5,7,9};
    int sumOdd=0;  // 3+7=10
    int sumEven=0; // 1+5+9=15
    for (int i=0; i<=4; i++)
    {
        if (i%2==0)
        {
          sumEven=sumEven+arr[i];  
        }
        else
        {
           sumOdd=sumOdd+arr[i]; 
        }
    }
    int ans= sumEven-sumOdd;
    printf("The difference between sum of numbers at even indices to odd indices is %d",ans);
    return 0;

}
