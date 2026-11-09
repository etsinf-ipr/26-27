/*
Define una estructura persona que guarde su edad, altura y nombre completo.
Implementa una función llamada mostrar_persona que imprima los datos recibidos.
En main, crea una persona por el método que prefieras 
y llama a la función para mostrar su contenido.
*/

#include <stdio.h>
#include <string.h> // Para usar strcpy

struct persona {
    int edad;
    float altura;
    char nombre[50]; // Cadena de caracteres para el nombre completo
};

void mostrar_persona(struct persona p) {
    printf("Edad: %d\n", p.edad);
    printf("Altura: %.2f\n", p.altura);
    // la cadena se muestra con %s
    printf("Nombre: %s\n", p.nombre);
}

int main() {

    struct persona juan;
    juan.edad = 25;
    juan.altura = 1.65;
    // no se puede asignar directamente una cadena con =
    // hay que usar string.h y la función strcpy
    // strcpy(destino, origen)
    strcpy(juan.nombre, "Juan Pérez");
    mostrar_persona(juan);

    // Otra forma de crear una persona es usando la inicialización directa
    struct persona maria = {30, 1.70, "María López"};
    mostrar_persona(maria);

    return 0;
} 