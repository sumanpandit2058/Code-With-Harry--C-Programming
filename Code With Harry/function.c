#include <stdio.h>
int average (int a, int b, int c);
int main(){
int a, b, c;
printf("Enter the three numbers \n");
scanf("%d,%d,%d",&a,&b,&c);
printf("The average value of %d,%d,%d is %d", a,b,c, average( a,  b,  c));
return 0;
}
int average (int a, int b, int c){
int average;
average= (a+b+c)/3;
return average;
}