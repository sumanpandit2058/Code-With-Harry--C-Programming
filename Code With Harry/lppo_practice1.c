#include <stdio.h>
int main(){
    int num, a,i;
printf("enter the number");
scanf("%d", &num);
printf("how much u want to print");
scanf("%d", &a);
for (i=a; i>=0; i--){
    printf("%d * %d = %d \n", num, i, (num *i));
    

}
return 0;
}