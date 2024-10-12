#include <stdio.h>
int main ()
{
    float mathmarks=100;
    float englishmarks=90;
    float sciencemarks=80;
    float hindimarks=70;
    float sanskritmarks=60;
    float  percentage;
    percentage = ( mathmarks + englishmarks + sciencemarks + hindimarks + sanskritmarks)/5;
    printf("The percentage of all 5 subjects are %f",percentage);
    return 0;
}
