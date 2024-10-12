#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int r;
    printf("Enter the value of r:\n");
    scanf("%d",&r);
    int nfact = 1;
    for(int i=1; i<=n; i++){
        nfact=nfact*i;
    }
    int rfact = 1;
    for (int i=1; i<=r; i++){
        rfact=rfact*i;
    }
    int nrfact =1;
    for (int i=1; i<=(n-r); i++)
    {
        nrfact=nrfact*i;
    }
    int ncr= nfact/(rfact*nrfact);
    printf("The value of given combination is %d",ncr);
    return 0;
}