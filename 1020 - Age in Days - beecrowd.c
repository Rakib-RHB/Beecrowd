#include <stdio.h>
int main()
{
    int D, M, Z;
    scanf("%d",&D);
    Z = D / 365;
    D = D - (Z * 365);
    M = D / 30;
    D = D - (M * 30);
    printf("%d ano(s)\n", Z);
    printf("%d mes(es)\n", M);
    printf("%d dia(s)\n", D);
    return 0;

}
