#include <stdio.h>
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter [%d][%d] the element in the matrix    \n", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d      ", arr[i][j]);
            if (j == 2)
            {
                printf("\n");
                break;
            }
        }
    }
    return 0;
}