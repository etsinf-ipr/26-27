#include <stdio.h>


int main(){

    int x, y;
    printf("punto (x,y): ");
    // formato: (x,y)
    scanf("(%d,%d)", &x, &y);
    printf("x: %d, y: %d\n", x, y);

    return 0;
}