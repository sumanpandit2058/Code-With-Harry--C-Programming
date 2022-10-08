#include <stdio.h>
int main(){
int a=3,*j,**k;
j=&a;
k=&j;
printf("The value of a is %d \n", **k);
return 0;
}