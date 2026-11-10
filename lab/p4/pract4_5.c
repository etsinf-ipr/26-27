/*
Escribe un programa que pida los datos de un vehículo, la
hora de entrada y la hora de salida. Almacena cada dato en las estruc-
turas vehículo y hora correspondientes. Si los datos son válidos, calcula
y muestra por pantalla el pago que le corresponde por la duración y el
tipo de vehículo.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TARIFA_RESIDENTE 1.50
#define TARIFA_VISITANTE 3.50
#define DIA_COMPLETO     1440 // 24 horas * 60 minutos

struct vehiculo {
    char matricula[8]; // 7 caracteres + '\0'
    int plaza;
    char tarifa;
};

struct hora{
    int h, m;
};

int es_valida(struct hora t) {
    return (t.h >= 0 && t.h <= 23) && (t.m >= 0 && t.m <= 59);
}

int minutos(struct hora t) {
    return t.h * 60 + t.m;
}

int duracion(struct hora entrada, struct hora salida) {
    int min_entrada = minutos(entrada);
    int min_salida = minutos(salida);
    if (min_salida < min_entrada) {
        // Si la salida es antes que la entrada, asumimos que es al día siguiente (opcional)
        min_salida += DIA_COMPLETO; // Añadimos 24 horas en minutos
    }
    return min_salida - min_entrada;
}  


int es_valido(struct vehiculo v) {
    // Comprobar que la matrícula tiene 4 números al principio
    for (int i = 0; i < 4; i++) {
        if(isdigit(v.matricula[i]) == 0) {
            return 0; // No es válido
        }
    }
    // Comprobar que la matrícula tiene 3 letras mayúsculas al final
    for (int i = 4; i < 7; i++) {
        if(isupper(v.matricula[i]) == 0) {
            return 0; // No es válido
        }
    }
    return 1; // Es válido
    scanf("%d", &v.plaza);
    
    printf("Tarifa (R/V): ");
    scanf(" %c", &v.tarifa); // Espacio antes de %c para ignorar el salto de línea

    // Solicitar al usuario la hora de entrada y salida
    printf("Hora de entrada (hora:min): ");
    scanf("%d:%d", &entrada.h, &entrada.m);
    
    printf("Hora de salida (hora:min): ");
    scanf("%d:%d", &salida.h, &salida.m);

    // Comprobar si los datos son válidos
    if (es_valido(v) && es_v
}

int pago(struct vehiculo v, struct hora entrada, struct hora salida) {
    float tarifa = (v.tarifa == 'R') ? TARIFA_RESIDENTE : TARIFA_VISITANTE;
    // las tarifas son por hora: se divide entre 60 para obtener el coste por minuto
    return tarifa / 60.0 * duracion(entrada, salida);
}

int main() {
    struct vehiculo v;
    struct hora entrada, salida;

    // Solicitar al usuario los datos del vehículo
    printf("Matrícula (9999ABC): ");
    scanf("%7s", v.matricula); // Limitar a 7 caracteres
    
    printf("Plaza: ");
    scanf("%d", &v.plaza);
    
    printf("Tarifa (R/V): ");
    scanf(" %c", &v.tarifa); // Espacio antes de %c para ignorar el salto de línea

    // Solicitar al usuario la hora de entrada y salida
    printf("Hora de entrada (hora:min): ");
    scanf("%d:%d", &entrada.h, &entrada.m);
    
    printf("Hora de salida (hora:min): ");
    scanf("%d:%d", &salida.h, &salida.m);

    // Comprobar si los datos son válidos
    if (es_valido(v) && es_valida(entrada) && es_valida(salida)) {
        int total_pago = pago(v, entrada, salida);
        printf("Pago total: %.2f\n", total_pago);
    } else {
        printf("Error: Datos inválidos\n");
    }

    return 0;
}