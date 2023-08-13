#include <stdio.h>
int main()
{
    char Name;
    double Salary, Receive, TOTAl;
    scanf("%s",&Name);
    scanf("%lf %lf",&Salary,&Receive);
    TOTAl = Salary+Receive*.15;
    printf("TOTAL = R$ %.2lf\n",TOTAl);
    return 0;


}
