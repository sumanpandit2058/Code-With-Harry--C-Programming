#include <stdio.h>
int times(int *a);
int main(){
int a=5, k;
k=a;
printf("The value of a is %d \n", times(&a));
return 0;
}
int times(int *a){
int t;
t= 10* *a;
return t;
}
