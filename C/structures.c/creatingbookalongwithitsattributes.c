#include <stdio.h>
#include <string.h>
int main ()
{
 struct book
 {
    char name[50];
    int noofpages;
    float price;
 }a,b,c;
 a.noofpages=50;
 a.price=100.6789;
 strcpy(a.name,"Doglapan"); // here array name is initialised without declaration so it is must to provide strcpy
 printf("The no of pages will be %d\n",a.noofpages);
 printf("The name of the book is %s\n",a.name);

 return 0;
}