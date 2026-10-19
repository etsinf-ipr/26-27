#include <stdio.h>


int main(int argc, char *argv[]) {
    int n;

    printf("argc: %d\n", argc);
    // recorre los argumentos mostrando su valor
    for(int i = 0; i < argc; i++)
        printf("argv: %s\n", argv[i]);

    // lo mismo de forma manual (si sabes cuántos hay)
    //printf("argv0: %s\n", argv[0]);
    //printf("argv1: %s\n", argv[1]);
    //...

    return 0;
}


