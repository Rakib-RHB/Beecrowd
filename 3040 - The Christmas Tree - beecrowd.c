/*
Every year, Roberto likes to choose his Christmas tree, he doesn't let anyone choose for him, because he thinks the tree to be beautiful, must meet some conditions, such as height, thickness and number of branches, so he can hang many Christmas decorations on it.

Roberto wants his tree to be at least 200 centimeters tall, but he doesn't want it to be larger than 300 centimeters, or the tree won't fit in his house. As for thickness, he wants his tree to have a trunk that is 50 centimeters in diameter or more. The tree must be 150 branches or greater.

Input
The first line of input contains an integer N(0 < N ≤ 10000), the number of test cases. The next N lines contain 3 integers each, h, d and g(0 < a, d, g ≤ 5000), the height of the tree in centimeters, its diameter in centimeters, and the amount of tree branches.

Output
Your task is, for each tree, to print Sim, if it is a tree that Roberto can choose, or Nao, if it is a tree he should not choose.

Input Sample
8

200 60 160

150 50 200

300 85 341

110 10 50

450 90 1141

270 40 340

262 51 432

203 60 200

Output Sample


Sim

Nao

Sim

Nao

Nao

Nao

Sim

Sim

*/




#include<stdio.h>
int main()
{
    int n,a,d,g;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d%d%d",&a,&d,&g);
        if(a >= 200 && a<= 300 && d >= 50 && g >= 150)
        {
            printf("Sim\n");
        }

        else
        {
            printf("Nao\n");
        }
        n--;
    }

    return 0;

}
