#include<stdio.h>
int main ()
{
int A, B, S, MaiorAB;
scanf("%d%d%d", &A, &B, &S);
MaiorAB = (A + B + abs(A - B)) / 2;
MaiorAB = (MaiorAB + S + abs(MaiorAB - S)) / 2;
printf("%d eh o maior\n", MaiorAB);
return 0;
}
