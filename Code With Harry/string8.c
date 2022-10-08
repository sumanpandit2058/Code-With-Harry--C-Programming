#include <stdio.h>
void slice(char *sp, int m, int n){
    char *ptr = sp;
    int i=0;
    while (i<n){
       sp[i]= sp[i+m];
       printf("%c", sp[i]);
       i++;
    }
}
int main(){
char sp[]= "Suman pandit";
slice(sp, 1,8);
return 0;
}