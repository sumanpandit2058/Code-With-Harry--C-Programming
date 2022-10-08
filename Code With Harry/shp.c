#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    int roll;
    int marks[5];

} s;

int main()
{
    int i = 0;
    printf("enter the name of student:");
    scanf("%s", s.name);
    printf("enter the roll no of student:");
    scanf("%d", &s.roll);
    for (i; i < 5; i++)
    {

        printf("enter the marks of subject %d :", i + 1);
        scanf("%d", &s.marks[i]);
    }
    printf("Name:%s\n", s.name);
    printf("Roll no:%d\n", s.roll);

    for (i; i < 5; i++)
    {
        printf("mark of subject %d is %d \n", i + 1, s.marks[i]);
    }
    return 0;
}