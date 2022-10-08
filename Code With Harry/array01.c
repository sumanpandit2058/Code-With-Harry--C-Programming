#include <stdio.h>
void ptrArray(int *ptr, int n){
    printf("The value present in third element is %d \n",*(ptr+2) );
}
int main(){
int  *ptr, arr[10];
ptr = &arr[0];
for (int i=0; i<10; i++){
    printf("Enter the marks %d=  ",i+1);
    scanf("%d", ptr);
    ptr++;
}
ptrArray(arr, 10);
return 0;
}