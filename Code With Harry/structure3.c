#include <stdio.h>
#include<string.h>
typedef struct demos
{
    char name[100];
    int num;
    char post[100];
} demo;
int main(){
    int n;
    printf("Enter the number of demos \n");
    scanf("%d", &n);
    demo d[n];
    for (int i=0; i<n; i++){
        printf("Enter the %d name \n", i+1);
        scanf("%s", &d[i].name);
        printf("Enter the number \n"); 
        scanf("%d", &d[i].num);
        printf("Enter the post \n");
        scanf("%s", &d[i].post);
    }
    printf("\n\n");
    for (int i=0; i<n; i++){
        printf("The name of %d employee is %s\n", i+1, d[i].name);
        printf("The number is %d \n", d[i].num);
        printf("He is in the post of %s \n",d[i].post);
        printf("\n");
    }
return 0;
}
