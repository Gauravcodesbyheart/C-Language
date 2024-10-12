#include <stdio.h>
int main ()
{
    int arr [5]= {1,2,3,4,5};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);    // from the ouput we can clearly see how the storage have ben occupied to the each element of the array
    printf("%p\n",&arr[4]);
    return 0;
}