#include<string.h>
#include <stdio.h>
int main(){
char name[100];
printf("Enter ur name \n");
gets (name);
puts (name);
printf("\n %d \n",strlen(name));
return 0;
}