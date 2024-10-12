#include <stdio.h>
int main ()
{
    struct pokemon
    {
        int hp;
        int attack;
        int speed;
    };
    struct legendary
    {
    int specialattack;
    struct pokemon x ;
    };
    return 0;
}