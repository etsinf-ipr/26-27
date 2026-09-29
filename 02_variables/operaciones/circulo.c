/* 
    uso de funciones
    para compilar usando math.h hay que incluir -lm 
*/

#include <stdio.h>
#include <math.h>

int main() {
    // pide el radio
    float radio;
    printf("Radio: ");
    scanf("%f", &radio);

    // calcula los valores
    float perimetro, area, volumen;
    perimetro = 2 * M_PI * radio;
    area = M_PI * pow(radio,2);
    volumen = 4.0 / 3 * M_PI * pow(radio,3); //ojo a la división entera

    //muestra los resultados
    printf("Perímetro = %.2f\n", perimetro);
    printf("Area = %.2f\n", area);
    printf("Volumen = %.2f\n", volumen);

    return 0;
}