#include <stdio.h>
int main()
{
    float salary, tax;
    printf("Enter ur monthly income \n");
    scanf("%f", &salary);
    if (salary >= 250000 && salary < 500000)
    {
        tax = salary * 0.05;
        printf("You have to pay 5 percent tax so its %f", tax);
    }
    else if (salary >= 500000 && salary < 1000000)
    {
        tax = salary * 0.2;
        printf("You have to pay 20 percent tax so its %f", tax);
    }
    else if (salary >= 1000000)
    {
        tax = salary * 0.3;
        printf("You have to pay 30 percent tax so its %f", tax);
    }
    else
    {
        printf("You don't have to pay any tax");
    }
    return 0;
}