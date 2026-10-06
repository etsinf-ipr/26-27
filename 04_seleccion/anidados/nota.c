#include <stdio.h>

void en_letra(float nota){
    if(nota >= 9)
        printf("Sobresaliente\n");
    else if(nota >= 7)
        printf("Notable\n");
    else if(nota >= 5)
        printf("Aprobado\n");
    else
        printf("Suspenso\n");
}

int main(){

    float nota;
    printf("Nota: ");
    scanf("%f", &nota);

    en_letra(nota);
    return 0;
}