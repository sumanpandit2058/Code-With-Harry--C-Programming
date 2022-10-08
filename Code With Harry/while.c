#include <stdio.h>
int main(){
    int n, i;
    printf("enter the number n \n");
    scanf("%d", &n);
for (i=n ;i>-1; i--){
    printf("The value of A is %d \n ", i);
    if(i==10){
        break;
    }
}
return 0;
}