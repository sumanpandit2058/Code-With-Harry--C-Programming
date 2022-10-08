#include <stdio.h>
struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1;
    printf("Enter the x :  ");
    scanf("%d", &v1.x);
    printf("\n Enter the y :  ");
    scanf("%d", &v1.y);
    printf("\nThe coordinates os x and y are %d and %d", v1.x, v1.y);
    return 0;
}