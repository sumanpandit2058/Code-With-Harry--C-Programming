#include <stdio.h>
float force(float mass);
int main(){
float mass;
printf("Enter the mass \n");
scanf("%f", &mass);
printf("The force of attraction on a body of mass %f is %f NETWON\n", mass, force(mass)) ;
return 0;
}
float force(float mass){
    float force, g=9.8;;
    force= mass * g;
    return force;
}