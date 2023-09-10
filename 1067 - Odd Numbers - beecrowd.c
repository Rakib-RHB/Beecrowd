#include <stdio.h>
int main ()
{
    int x, n;
    scanf("%d", &n);
    for (x = 1 ; x <= n; x++ )
    {
        if( x % 2 != 0)
        {
            printf("%d \n", x);
        }
    }
}
