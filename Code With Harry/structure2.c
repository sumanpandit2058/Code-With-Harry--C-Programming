#include <stdio.h>
struct vector
{
    int x;
    int y;
};
void vector(int x1, int y1, int x2, int y2)
{
    int tx, ty;
    tx = x1 + x2;
    ty = y1 + y2;
    printf("\nAfter adding the two vectors the coordinates are %d and %d", tx, ty);
}
int main()
{
    struct vector v1, v2;
    printf("Enter the first coordinate of x and y: ");
    scanf("%d , %d", &v1.x, &v1.y);
    printf("\nEnter the second coordinate of x and y: ");
    scanf("%d , %d", &v2.x, &v2.y);
    vector(v1.x, v1.y, v2.x, v2.y);
    return 0;
}