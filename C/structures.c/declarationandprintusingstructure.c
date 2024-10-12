#include <stdio.h>
int main ()
{
    struct pokemon  //here structure is used for storing the char data type value 
    {
      int hp;
      int speed;
      int attack;
      char tier;
    };
    struct pokemon pikachu;
    pikachu.hp=60;
    pikachu.speed = 50;
    pikachu.attack=70;
    pikachu.tier= 'A';
    printf("%d\n %d\n %d\n %c\n ",pikachu.hp,pikachu.speed,pikachu.attack, pikachu.tier);
    return 0;
}