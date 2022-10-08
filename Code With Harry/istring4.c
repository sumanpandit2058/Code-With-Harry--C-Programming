#include <stdio.h>
#include<string.h>
int main(){
    int a, count=0;;
    char name[100];
    printf("Enter your full name \n");
    gets(name);
    // strlen(name);
    a=strlen(name);
    printf("There are %d characters \n", a);
    for (int i=0; i<a; i++){
        for (int j=i+1; j<a; j++){
            if ( name[i] ==  name[j]){
                count++;
            }
        }
    }
    printf("There are %d repeated characters \n", count);
return 0;
}