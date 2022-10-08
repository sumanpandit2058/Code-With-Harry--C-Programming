#include <stdio.h>
void variable(int a){
    printf("The address of a is %u \n", &a);
}
int main(){
int i=3;
printf("The address of i is  %u \n", &i);
variable( i);
printf("The address of i is %u \n", &i);
return 0;
}