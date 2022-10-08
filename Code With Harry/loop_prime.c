#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int num, guess, count=0;
srand(time(0));
num=rand()%100;
 printf("The number is %d \n", num);
do {
   printf("Guess the number \n");
   scanf("%d", &guess);
   if(guess>num){
      printf("Choose a lower number\n");
   }
   else if (guess<num){
      printf("Choose a higher number\n");
   }
   else if (guess==num){
      printf("You have guessed it right in just %d attempts \n", count);
   }
   count++;
} while (num!=guess);
return 0;
}