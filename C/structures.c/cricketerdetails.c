#include <stdio.h>
#include <string.h>
int main ()
{
    typedef struct cricketer 
    {
        char name[30];
        int age;
        int noofmatches;
        float average;
    }cricketer;
    cricketer  arr [3];
    printf("Enter the details of cricketer:\nEnter the name of cricketer:\nEnter the age of cricketer\nEnter the no of matches\nEnter the average:\n");
    for (int i=0; i<3; i++)
    {
        scanf("%[^\n]s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noofmatches);
        scanf("%f",&arr[i].average);
    }
    for (int i=0; i<3; i++)
    {
        printf("%[^\n]s",arr[i].name);
        printf("%d",arr[i].age);
        printf("%d",arr[i].noofmatches);
        printf("%f",arr[i].average);
    }
    return 0;
}