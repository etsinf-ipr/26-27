/*
    crea un vector de 10 floats y calcula su media y su suma
*/

#include <stdio.h>

int main(){
    float v[10];

    // pide los valores
    printf("Introduce 10 valores:\n");
    for(int i=0; i<10; i++)
        scanf("%f", &v[i]);
    
    // calcula la suma
    float suma = 0;
    for(int i=0; i<10; i++)
        suma += v[i];
    // calcula la media
    float media = suma / 10;

    // muestra lso resultados
    printf("Suma: %f\n", suma);
    printf("Media: %f\n", media);
   
    return 0;
}