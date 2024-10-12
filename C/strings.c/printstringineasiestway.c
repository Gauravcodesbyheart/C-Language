#include <stdio.h>
int  main ()
{
    char str[]= "College wallah is the best youtube channel";    // compiler itself attaches \0
    int i=0;
    while (str[i]!= '\0')
    {
      printf("%c",str[i]);
      i++;
    }
    return 0;
}