#include <stdio.h>
int mult(int x){
int y;
y= x*50;
return y;
}
int main(){
int a=5;
printf("The value of a is %d \n", mult(a));
return 0;
}