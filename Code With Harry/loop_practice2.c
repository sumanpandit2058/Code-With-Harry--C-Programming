#include <stdio.h>
int main(){
int num, prime=1,i=2;
printf("Enter the number");
scanf("%d", &num);
for (i; i<num; i++ ){
    if(num%i==0){
        prime=0;
        break;
    }
}
if (prime ==0){
    printf("The number is not prime");
}
else{
    printf("The number is prime");
}
return 0;
}