#include <stdio.h>

#define SIZE 10

int main(){
    int a[10] = {0,4,5,-5,-3,4,-9,1,3,7};
    //0 4 5 4 1 3 7
    int positivos[10];
    int j = 0;
    
    for(int i = 0; i < SIZE; i++){
        if (a[i] >= 0){
            positivos[j] = a[i];  
            j++;
        }          
    }
    int num_elem = j;
    for(int i = 0; i < num_elem; i++)
        printf("%d ", positivos[i]);
    printf("\n");
    printf("positivos: %d\n", num_elem);
    return 0;
}