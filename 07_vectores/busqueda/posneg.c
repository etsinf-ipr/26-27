#include <stdio.h>

#define SIZE 10

int main(){
    int a[10] = {0,4,5,-5,-3,4,-9,1,3,7};
    int positivos = 0;
    int negativos = 0;
    for(int i = 0; i < SIZE; i++){
        if (a[i] >= 0)
            positivos = positivos + 1;
        else    
            negativos++;
    }
    printf("pos: %d, neg: %d\n", positivos, negativos);

    return 0;
}