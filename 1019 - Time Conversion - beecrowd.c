
#include<stdio.h>
int main ()
{
    int H, M, S;
    scanf("%d", &S);
    H = S / 3600;
    S = S - (H * 3600);
    M = S / 60;
    S = S - (M * 60);
    printf("%d:%d:%d\n", H, M, S);
    return 0;

}
