#include <stdio.h>
int maze (int cr, int cc, int er, int ec)
{
    int rightwards = 0;
    int downwards  = 0;
    if ( cr==er && cc == ec )
    return 1;
    if (cr == er)
    {
        rightwards += maze(cr,cc+1,er,ec);
    }
    if (cc == ec)
    {
        downwards += maze(cr+1,cc, er, ec);
    }
    if (cr<er && cc < ec)
    {
        rightwards += maze (cr, cc+1, er, ec );
        downwards  += maze (cr+1, cc, er, ec); 
    }
    int totalways = rightwards + downwards;
    return totalways;
}
int main ()
{
    int n;
    printf("Enter the no. of rows:\n");
    scanf("%d",&n);
    int m;
    printf("Enter the no. of columns:\n");
    scanf("%d",&m);
    int noofways = maze (1,1,n,m);
    printf("Total no. of ways is %d\n",noofways);
    return 0;
}