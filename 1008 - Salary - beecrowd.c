#include <stdio.h>
int main()
{
    int NUMBER, Worked_hour;
    float Amount, SALARY;
    scanf("%d%d%f", &NUMBER, &Worked_hour, &Amount);
    SALARY=(Worked_hour*Amount);
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);
    return 0;
}
