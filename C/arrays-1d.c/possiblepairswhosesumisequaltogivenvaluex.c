#include <stdio.h>
int main ()
{   
    int count=0;
    int x=12;
    int arr[8]= {1,2,3,4,5,6,7,8};
    for (int i=0; i<=7;i++)
    {
        for (int j=i+1; j<=7; j++)
        {
         if (arr[i]+arr[j]==x) 
         {
            count++;
            printf ("(%d , %d)",arr[i],arr[j]);
         }
        }
    }
    printf ("There are total %d sets of elemets which will give sum %d",count,x);
    return 0;
}