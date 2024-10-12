#include <stdio.h>
void tower (int n, char s, char h, char d)  //s,h,d denotes initial stages of rods that are source, helper, destination 
{
    if (n==0) return ;
    tower (n-1, s,d,h);     // when moving (n-1) small  disks middle rod serves as destination
    printf("%c ----> %c\n",s,d);  // now big and only one disk left at rod 1 will have to tensfer at rod 3 whuch is it's destination
                                  // so simply we can print s to d (for big disk)

    tower(n-1, h, s, d);    // now for moving small pyramid set from middle rod and drop to last rod middle one becone source now  
                            // first rod serves as helper now 
    return ;                        // last rod serves as destination
}

int main ()
{
    int n;
    printf("Enter the number of disks in  you want in this hanoi of tower game:\n");
    scanf("%d",&n);
    tower(n,'a','b','c');
    return 0;
} 