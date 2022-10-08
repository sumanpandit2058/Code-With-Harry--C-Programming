#include <stdio.h>
int main()
{
    float math, social, hp, sub, sum, total;
    printf("Enter the marks of math \n");
    scanf("%f", &math);
    printf("Enter the marks of social \n");
    scanf("%f", &social);
    printf("Enter the marks of hp \n");
    scanf("%f", &hp);
    total = math + social + hp;
    sum = (total / 300) * 100;
    printf("your total percentage is %f \n", sum);
    if (sum >= 40 && social >= 33 && hp >= 33 && math >= 33)
    {
        printf("U are passed");
    }
    else
    {
        printf("u failed mf");
    }

    return 0;
}