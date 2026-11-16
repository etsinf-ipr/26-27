#include <stdio.h>

#define SIZE 10

int main(){
    int a[10] = {0,4,5,-5,-3,4,-9,1,3,7};
    int mayor = -999;
    int menor = 999;

    for(int i = 0; i < SIZE; i++){
        if (a[i] > mayor)
            mayor = a[i];
        if(a[i] < menor)
            menor = a[i];
    }
    printf("max: %d, min: %d\n", mayor, menor);

    return 0;
}