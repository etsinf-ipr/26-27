/* 
Indica qué hace el siguiente código 
mostrando los valores de las variables en cada paso 
¿Cuál es el resultado?
*/

#include <stdio.h>
int main() {
    int a, n, res = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        scanf("%d", &n);
        if (n > 0)
            res++;
    }
    printf("%d\n", res);
    return 0;
}

/*
RESPUESTA:

a   i   n   res
----------------
5   1   3   1
    2   4   2
    3   -1  2
    4   0   2
    5   2   3

El programa suma los números positivos que introduce el usuario.
a: cuántos números va a introducir
n: el número que introduce el usuario
res: cuántos números positivos ha introducido el usuario
i: contador del bucle    

*/