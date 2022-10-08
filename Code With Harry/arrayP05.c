#include <stdio.h>
int main()
{
    int arr[3][10];
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d    \n", i + 2, j + 1, (2 * (j + 1)));
        }
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d    \n", i + 7, j + 1, (7 * (j + 1)));
        }
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d    \n", i + 9, j + 1, (9 * (j + 1)));
        }
    }
    return 0;
}