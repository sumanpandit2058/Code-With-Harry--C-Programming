#include <stdio.h>
void positiveArray(int *ptr, int b){
    int count=0;
    for (int i=0; i<b; i++){
        if (*(ptr+i)>0){
            printf("The positive numbers are %d  \n", *(ptr+i));
            count++;
        }
    }
    printf("There are %d positive numbers in this array \n", count);
}
int main(){
int n,arr[n];
printf("How many elements you want in array? \n");
scanf("%d", &n);
for (int i=0; i<n; i++){
    printf("Enter the number in array %d =  ", i+1);
    scanf("%d", &arr[i]);
}
positiveArray(arr, n);
return 0;
}