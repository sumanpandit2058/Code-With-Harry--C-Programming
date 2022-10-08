#include <stdio.h>
void multTable(int *arr, int num, int n){
    for (int i=0; i<n; i++){
        arr[i]= num*(i+1);
    } 
    for (int i=0; i<n; i++){
        printf(" %d x %d = %d   ", num, i+1, arr[i]);
    }
printf("*************Another table*************     \n");
}
int main()
{
    int n, m, x,v,z , y;
    int arr[n][m];
    printf("Enter the n  \n");
    scanf("%d", &n);
    printf("Enter the m  \n");
    scanf("%d", &m);
    printf("Enter the three table u want  \n");
    scanf("%d, %d, %d", &x, &y, &z);
    printf("Enter the how much table u want  \n");
    scanf("%d", &v);
    printf("You have selected arr[%d][%d]   \n", n, m);
    for (int i=0; i<n; i++){
        multTable(arr[0], x , v);

    }
    return 0;
}