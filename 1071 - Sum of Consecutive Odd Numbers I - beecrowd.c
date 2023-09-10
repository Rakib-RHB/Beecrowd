
#include <stdio.h>
int main ()
{
    int X, Y, max, min, i, sum;
    sum = 0;
    scanf("%d%d", &X, &Y);
    if(X < Y)
    {
        min = X;
        max = Y;
    }
    else
    {
        max = X;
        min = Y;
        for( i = (min + 1); i < max; i++)
        {
            if( i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d", sum);


    }
}
