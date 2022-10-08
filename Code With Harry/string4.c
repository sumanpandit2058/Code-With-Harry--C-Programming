#include <stdio.h>
#include<string.h>
int main(){
    char ptr[10] = "Suman";
for (int i=0; i<5; i++){
    ptr[i]++;
}
printf("%s \n", ptr);
for (int i =4; i>=0; --i){
// if (i>-1){
//  ptr[i]--;
// }
ptr[i]--;
}
printf("%s \n", ptr);
return 0;
}
