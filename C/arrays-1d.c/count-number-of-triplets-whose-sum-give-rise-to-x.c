#include <stdio.h>
int main ()
{
    int arr[8]= {1,2,3,4,5,6,7,8};
    int count = 0;
    int x=12;
    printf("The possible pairs have been mentioned below:\n");
    for (int i=0; i<=7; i++)
    {
        for (int j=i+1; j<=7; j++)
        {
            for (int k=j+1; k<=7; k++)
            {
              if (arr[i]+arr[j]+arr[k]==x)
              { 
                printf ("(%d,%d,%d)",arr[i],arr[j],arr[k]);
                count++;
              }
            }
        }
    }
    printf("\n");
    printf ("The total possible pairs whose sum is  equal to %d is %d",x,count);
    return 0;
}