#include <stdio.h>

#define SIZE 10

int main(){
    int a[SIZE] = {0,4,5,-5,-3,4,-9,1,3,7};
    int mayor = -999;
    int pos = -1;
    for(int i = 0; i < SIZE; i++){
        if (a[i] > mayor){
            mayor = a[i];
            pos = i;
        }

    }
    printf("max: %d, pos: %d\n", mayor, pos);

    return 0;
}