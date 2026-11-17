/*
    Muestra de que rand() genera números uniformes
    Para simular dos dados, si generamos un número entre 2 y 12 no funciona
    Hay que generar dos números entre 1 y 6 y sumarlos 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TIRADAS 1000

// genera un número al azar entre 1 y 12 directamente (incorrecto)
int un_dado(){
    // 11 valores posibles (% 11) empezando en 2 (+ 2)
    return (rand() % 11) + 2;
}

// genera dos dados independientes y los suma (correcto)
int dos_dados(){
    return (rand() %  6) + 1 + (rand() %  6) + 1;
}

// cuenta cuántas veces ha aparecido cada resultado
void frecuecias(int lanzamientos[], int frecuencias[]){
    for(int i=0; i<TIRADAS; i++){
        frecuencias[lanzamientos[i]]++;
    }
}

// muestra los resultados de las frecuencias
// formato: resultado(frecuencia esperada): frecuencia observada
void resultados(int freq[]){
    // probabilidad de cada resultado. [0] y [1] no se usan
    float p[13] = {0, 0, 1.0/36, 2.0/36, 3.0/36, 4.0/36, 5.0/36, 6.0/36, 
                   5.0/36, 4.0/36, 3.0/36, 2.0/36, 1.0/36};
    for(int i=2; i<=12; i++){
        int esperado = p[i] * TIRADAS; // frecuencia esperada
        printf("%d(%d): %d\n", i, esperado, freq[i]);
    }
}

// calcula la el valor máximo (para la escala de las barras)
int maxfreq(int v[]){
    int max = 0;
    for(int i=2; i<=12; i++)
        if(v[i] > max) max = v[i];
    return max;
}

// genera una "gráfica" de barras usando asteriscos
void barras(int freq[]){
    int maxbar = 50; // longitud máxima de la barra
    float factor = (float)maxbar / maxfreq(freq); // factor de escala

    for(int i=2; i<=12; i++){
        printf("%2d: ", i);
        // imprime una barra proporcional a la frecuencia
        for(int j=0; j<freq[i] * factor; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    srand(time(NULL));
    // variables para almacenar los resutlados de los lanzamientos
    int undado[TIRADAS];
    int dosdados[TIRADAS];
    
    // genera los lanzamientos de un dado y dos dados
    for(int i=0; i<TIRADAS; i++){
        undado[i] = un_dado();
        dosdados[i] = dos_dados();
    }

    // obtiene las frecuencias de cada resultado
    int freq1d[13] = {0};
    int freq2d[13] = {0}; 
    frecuecias(undado, freq1d);
    frecuecias(dosdados, freq2d);

    // muestra los resultados
    printf("Resultados de un dado:\n");
    resultados(freq1d);
    printf("Resultados de dos dados:\n");
    resultados(freq2d);

    // genera una "gráfica" de barras usando asteriscos
    printf("Gráfica de un dado:\n");
    barras(freq1d);
    printf("Gráfica de dos dados:\n");
    barras(freq2d);
    return 0;
}