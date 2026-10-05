#include <stdio.h>


void max( int a, int b, int c){
    int mayor;
    if(a > b){
        if (a > c){
            mayor = a;
        } else {
            mayor = c;
        }
    }
    else{
        if(b > c)
            mayor = b;
        else
            mayor = c;
    }

    // opcion b
    if( a > b && a > c)
        mayor = a;
    else if(b > a && b > c )
        mayor = b;
    else 
        mayor = c;


    printf("el mayor es %d\n", mayor);
}


int main(){

    int a,b,c;
    printf("Numeros: ");
    scanf("%d%d%d", &a, &b, &c);

    max(a,b,c);
    return 0;
}