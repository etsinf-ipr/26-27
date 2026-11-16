#include <stdio.h>

#define SIZE 10

 int buscar(int a[], int num){
    for(int i = 0; i < SIZE; i++){
        if(a[i] == num)
            return i;
    }
    return -1;
 }

int main(){
    int a[SIZE] = {0,4,5,-5,-3,4,-9,1,3,7};
    int num = 14;
    int pos; 
    pos = buscar(a, num);
    printf("El %d está en la posicion %d\n", num, pos);

    return 0;
}