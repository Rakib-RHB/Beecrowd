#include <stdio.h>
int main ()
{
    float A;
    scanf("%f", &A);
    if(A <= 0 || A >100)
    {
        printf("Fora de intervolo\n");
    }
    else if (A >= 0 && A <= 25)
    {
        printf("Intervalo (25,0)");
    }
    else if (A > 25 && A <= 50)
    {
        printf("Intervalo (25,50)");
    }
    else if (A = 50 && A <= 75)
    {
        printf("Intervalo (50,75)");
    }
    else if (A = 75 && A <= 100)
    {
        printf("Intervalo (75,100)");
    }
    return 0;




}
