#include <stdio.h>
int sum(int *a, int *b);
int average(int *a, int *b);
int main()
{
    int a, b, *c, *d;
    printf("Enter the value of a and b \n");
    scanf("%d,%d", &a, &b);
    printf("the sum is %d \n", sum(&a, &b));
    printf("The average is %d \n", average(&a, &b));
    return 0;
}
int sum(int *a, int *b)
{
    int sum;
    sum = *a + *b;
    // average= sum /2;
    return sum;
    // return average;
}
int average(int *a, int *b)
{
    int average;
    average = (*a + *b) / 2;
    return average;
}