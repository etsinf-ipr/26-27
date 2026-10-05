#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    // SEMILLA
    srand(time(NULL));


    printf("randmax: %d\n", RAND_MAX);

    for(int i = 0; i < 10; i++){
        int num = rand() % 20 + 1;
        printf("num: %d\n", num);
    }
   

    return 0;
}