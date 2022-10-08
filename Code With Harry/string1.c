#include <stdio.h>
#include<string.h>
int main(){
char a[]= "Suman";
char b[]= {'s', 'u', 'm', 'a', 'n', '\0'};
printf("The length of a string is %d \n", strlen(a));
 printf("The length of b string is %d \n", strlen(b));
return 0;
}