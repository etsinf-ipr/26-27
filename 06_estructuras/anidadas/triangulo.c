/*
    Plantilla para la tarea de estructuras anidadas.
    Manejo de triángulos
*/

#include <stdio.h>
#include <math.h> // recuerda compilar con -lm

// funcion para comparar si dos números decimales son iguales
// no se pueden comparar directamente -> se mira si su diferencia
// es menor que un valor muy pequeño (EPS)
// Úsala cuando tengas que comparar dos números decimales
// ejemplo: if (eq(a,b)) { ... } else { ... }
int eq(float a, float b) {
    const float EPS = 1e-6;
    return fabs(a - b) < EPS;
}

/* ===================== Tipos ===================== */
// Define aquí las estructuras que necesites para 
// para representar los puntos y los triángulos.
// punto_t: representa un punto en el plano con dos coordenadas float (x, y).
// trian_t: contiene tres vértices de tipo punto_t.



/* ===================== Puntos ===================== */
// Funciones para la gestión de puntos de forma individual

// crea_punto: 
// recibe dos coordenadas (float) y devuelve un punto con esas coordenadas

// distancia: 
// recibe dos puntos p, q y calcula la distancia euclídea entre ellos



/* ===================== Construccion y validacion ===================== */
// Funciones para la creación y validación de triángulos
// crear_tri:
// recibe tres puntos y devuelve un triángulo con esos puntos en los vértices

// es_valido: 
// recibe un triangulo y devuelve 1 si es válido y 0 en caso contrario. 



/* ===================== Calculos elementales ===================== */
// Funciones para calcular propiedades del triángulo

// perimetro:
// devuelve el perímetro del triangulo (suma de los tres lados)

// area:
// devuelve el área del triángulo. Usa la fórmula de Herón 


/* ===================== Clasificacion ===================== *////
// (OPCIONAL) Funciones para clasificar triángulos

// tipo_por_lado:
// Devuelve una cadena con el tipo: "equilatero", "isosceles"  o "escaleno"

// tipo_por_angulo:
// Devuelve una cadena con el tipo: "rectangulo", "acutangulo" u "obtusangulo" 


/* ===================== Utilidades ===================== */
// Funciones generales de utilidad 

// imprimir:
// muestra por pantalla el triángulo con sus tres vértices

// (OPCIONAL) imprimir_punto:
// muestra por pantalla un punto con sus coordenadas.
// Puedes usarla para cada vértice del punto



/* ===================== Main ===================== */

int main(void) {
    // Crear vértices del triángulo (puedes cambiar los valores para probar)

    // Crear el triángulo con los vértices anteriores 

    // Comprueba si es válido (termina si no lo es)

    // Calcula y muestra por pantalla el perímetro y el área

    //(OPCIONAL) Clasifica el triángulo por lados y ángulos (muestralo)
     

    return 0;
}