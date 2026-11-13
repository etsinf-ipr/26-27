/*
    crea un vector de 8 enteros y lo muestra por pantalla en orden inverso
*/

#include <stdio.h>

int main(){
    int v[8];

    // pide los valores
    printf("Introduce 8 enteros:\n");
    for(int i=0; i<8; i++){
        scanf("%d", &v[i]);
    }
    // los muestra por pantalla en orden inverso
    for(int i=7; i>=0; i--){
        printf("%d\n", v[i]);    
        printf("%d\n", v[i]);    
    }
    return 0;
}