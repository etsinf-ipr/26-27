#include <stdio.h>

int main(){

    int num;
    int suma = 0;
    char continuar;

    do{
        printf("Número: ");
        scanf("%d", &num);
        suma += num;
        printf("¿Otro (s/n)? ");
        //esto es neceario para vaciar el buffer de teclado
        getchar();
        scanf("%c", &continuar);

    }while(continuar == 's' || continuar == 'S');
    
    printf("Total: %d\n", suma);
    return 0;
}