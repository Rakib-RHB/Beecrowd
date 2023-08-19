#include <stdio.h>
int main(){
float X, Y, Z, Area, sum;
scanf("%f%f%f", &X, &Y, &Z);
if((X + Y) > Z && (Y + Z) > X && (Z+ X) > Y)
{
    sum = X + Y + Z;
    printf("Perimetro = %.1f\n", sum);
}
else
{
    Area = .5*(X + Y)*Z;
    printf("Area = %.1f\n", Area);
}

return 0;
}
