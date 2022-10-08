#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the numbers \n");
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the greatest", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is the greatest", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("%d is the greatest", d);
    }

    return 0;
}