#include <stdio.h>
typedef struct chhotabheeem
{
    int hp;
    int speed;
    int attack;
    char tier;
}chhotabheem;
void fun (chhotabheem p)
{
 p.hp=60;
 printf("%d",p.hp);
 return ;
}
int main ()
{
  chhotabheem kaalia;
  kaalia.hp=100;
  printf("The value of hp of kaalia in main function is %d\n",kaalia.hp);
  printf("The value of hp of kaalia in  function is  ");
  fun (kaalia);

  return 0;
}