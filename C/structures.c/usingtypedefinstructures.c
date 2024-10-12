#include <stdio.h>
int main ()
{
    typedef struct book 
    {
     char name[50];
     int noofpages;
     float prices; 
    }book;    // by doing so book will now be used as structure itself....
    return 0;
}