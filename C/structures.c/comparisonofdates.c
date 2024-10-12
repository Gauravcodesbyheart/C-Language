#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main ()
{
    typedef struct date 
    {
        int day;
        int month;
        int year;
    }date;
    date a,b;
    
    printf("Enter the day of first date:\n");
    scanf("%d",&a.day);
    printf("Enter the month of first date:\n");
    scanf("%d",&a.month);
    printf("Enter the year of first date:\n");
    scanf("%d",&a.year);
    printf("Enter the day of second date:\n");
    scanf("%d",&b.day);
    printf("Enter the month second date:\n");
    scanf("%d",&b.month);
    printf("Enter the year of second date:\n");
    scanf("%d",&a.year);
    bool flag = true ;
    if (a.day!=b.day) flag = false;
    if (a.day!=b.day) flag = false;
    if (a.day!=b.day) flag = false; 
    if ( flag == true ) 
    printf("The dates matched");
    else 
    printf("The dates not matched");
    return 0;
}