#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
void main()
{
    struct node
    {
        int num;
        struct node *next;
    };
    typedef struct node NODE;
    NODE *head, *first, *temp = 0;
    int count = 0;
    first = 0;
    while (1)
    {
        head = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data \n");
        scanf("%d", &head-> num);
    }
}
