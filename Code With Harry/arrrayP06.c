#include <stdio.h>
void multTable(int *arr, int num, int y)
{
    int i;
    for (i = 0; i < y; i++)
    {
        arr[i] = num * (i + 1);
    }
    for (i = 0; i < y; i++)
    {
        printf("%d x %d = %d    \n", num, i + 1, arr[i]);
    }
}
int main()
{
    int arr[3][10];
    multTable(arr[0], 2, 10);
    multTable(arr[1], 7, 10);
    multTable(arr[2], 9, 10);
    return 0;
}