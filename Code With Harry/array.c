#include <stdio.h>
int main(){
int a=5;
int *ptr= &a;
int *cmp=&a;
printf("The value of ptr is %u \n", ptr);
printf("The value of cmp is %u \n", cmp);
return 0;
}

