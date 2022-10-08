#include <stdio.h>
int main(){
int arr[10], i;
for ( i=0; i<10; i++){
    printf("Enter the numbers in array %d = ", i+1);
    scanf("%d", &arr[i]);
}
printf("The reverse of input array are \n");
for ( i=9; i>=0; i--){
    printf("%d, ", arr[i]);
}
return 0;
}