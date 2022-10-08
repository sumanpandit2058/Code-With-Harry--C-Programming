#include <stdio.h>
#include<string.h>
int main(){
    int x,i=0;
char name[100];
char c;
printf("Enter ur name \n");
gets(name);
printf("Enter a character \n");
scanf("%c", &c );
x = strlen(name);
printf("There are %d characters \n", x);
for ( i=0; i<x; i++){
    if (c == name[i]){
        
        break;

    }
}
    if (i<x){
        printf("Element found \n", name[i]);
    }
else{
        printf("Element not found  \n", i);
    }
return 0;
}