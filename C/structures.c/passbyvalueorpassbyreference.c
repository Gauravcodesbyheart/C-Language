#include <stdio.h>
typedef   struct chhotabheem
{
    int hp;
    int speed;
    int attack;
    char tier;
}chhotabheem;
void change (chhotabheem p) // structure work on call by value 
{ 
    p.hp=70;
    p.attack=60;
    p.speed=110;
    return ;
}
int main ()
{
    chhotabheem kaalia;
    kaalia.hp=600;
    kaalia.attack=500;
    kaalia.speed=1000;
    change (kaalia);
    printf(" The vale of hp of kaalia is %d\n",kaalia.hp);
    printf("The value of speed of kaalia is %d",kaalia.speed);
    return 0;

}