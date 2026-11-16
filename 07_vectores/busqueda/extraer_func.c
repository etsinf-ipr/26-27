#include <stdio.h>

#define SIZE 10

int extraer_posit(int a[], int out[]){
    int j = 0;
    
    for(int i = 0; i < SIZE; i++){
        if (a[i] >= 0){
            out[j] = a[i];  
            j++;
        }          
    }
    return j;
}

int main(){
    int a[10] = {0,4,5,-5,-3,4,-9,1,3,7};
    //0 4 5 4 1 3 7
    int positivos[10];
    
    int num_elem = extraer_posit(a, positivos);
    
    for(int i = 0; i < num_elem; i++)
        printf("%d ", positivos[i]);
    printf("\n");
    printf("positivos: %d\n", num_elem);
    return 0;
}