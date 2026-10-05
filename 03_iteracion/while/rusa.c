#include <stdio.h>


int main(){
    int a, b;
    int suma = 0; // no olvides inicializarlo a 0

    // pide dos números
    printf( "Introduce dos números: ");
    scanf("%d", &a);
    scanf("%d", &b);
    // esto no hace falta: es solo para ver la tabla
    printf("%3d | %3d\n", a, b);

    // mientras se pueda dividir entre 2
    while(b > 1){
        // si es impar, hay que restar 1 y guardarnos el valor de a
        if( b % 2 == 1){
            b--;
            // en lugar de sumarlo al final, lo vamos acumulando
            suma += a;  // suma = suma + a;
        }
        /*
            multiplicamos el primero y dividimos el segundo
            esto se hace siempre, sea b par o impar
            así que se pone fuera del if
        */
        a *= 2; // a = a * 2;
        b /=2;  // b = b / 2;
        printf("%3d | %3d\n", a, b);
    }
    /*
        si hacemos el bucle con while(b > 0) 
        - ¿cuál es el resultado?
        - haz una traza para cada caso
    */
    printf("Resultado: %d\n", a 
        + suma);
    return 0;

}
