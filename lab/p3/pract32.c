#include <stdio.h>

#define TMIN -100.0
#define TMAX 80.0

int es_valida(float temp){
    return (temp >= TMIN && temp <= TMAX);
}

int es_normal(float temp){
    return (temp > 25 ? 0 : 1);
}

int main(){
    // pide num medidas
    int ntemp;
    printf("Total medidas: ");
    scanf("%d", &ntemp);

    // lee los valores
    float t;
    float acum = 0;
    for(int i = 0; i < ntemp; i++){
        // lectura validada
        do{
            printf("%d: ", i);
            scanf("%f", &t);
        }while(!es_valida(t));
        acum += t;
    }
    // asumo que ntemp > 0
    // si 
    
    float average = acum / ntemp;
    printf("temperatura media: %.2f ", average);

    // determina si es normal o alta
    if(es_normal(average))
        printf(" [normal]\n");
    else
        printf(" [alta]\n");

    // opcion 2
    //printf("%s\n", es_normal(average) ? "[normal]" : "[alta]");


    return 0;
}