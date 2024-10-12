#include <stdio.h>
int main ()
{
    struct pokemon 
    {
        int hp;   
        int attack;
        int speed;
        char tier;
    };
    struct  pokemon pikachu;
    struct pokemon channizaro;
    struct pokemon newtwo;
    printf("Enter the attack of pikachu:\n");
    scanf("%d",&pikachu.attack);
    printf("The attack of pikachu is %d",pikachu.attack);

    return 0;
}