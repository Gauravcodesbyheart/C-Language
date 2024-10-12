#include <stdio.h>
#include<string.h>
int main ()
{
    struct person 
    {
        char name[50];
        int salary;
        int age;
    }a,b;
    strcpy(a.name,"Gaurav Singh");
    a.salary=45,000;
    a.age=20;
    strcpy(b.name,"Anand Kumar");
    b.salary=10,000;
    b.age=50;
    printf("The name of 1st person is %s\n",a.name);
    printf("The age of the second person is %d\n",b.age);
    return 0;
}