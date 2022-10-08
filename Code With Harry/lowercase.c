#include <stdio.h>
int main(){
char letter;
printf("Enter a letter \n");
scanf("%c", &letter);
if(letter>=65 && letter<=90){
    printf("Its upper case");
}
else{
    printf("Its lower case");
}
return 0;
}