#include <stdio.h>
int main(){
int x,y,z ;
int arr[x][y][z];
printf("Enter the 3 items that u want to see in 3d array   \n");
scanf("%d,%d,%d",&x,&y,&z);
for (int i=0; i<x; i++){
    for (int j=0; j<y; j++){
        for (int k=0; k<z; k++){
            printf("The address of [%d][%d][%d] is %u   \n ", i+1,j+1,k+1,&arr[i+1][j+1][k+1]);
        }
    }
}
return 0;
}   