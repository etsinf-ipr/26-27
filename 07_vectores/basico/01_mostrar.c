/*
    crea un vector de 5 enteros y lo muenstra por pantalla
*/

#include <stdio.h>

int main(){
    int v[5];

    // pide los valores
    printf("Introduce 5 enteros:\n");
    for(int i=0; i<5; i++){
        scanf("%d", &v[i]);
    }
    // los muestra por pantalla en líneas separadas
    for(int i=0; i<5; i++){
        printf("%d\n", v[i]);    
    }
    return 0;
}