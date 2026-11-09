float ocupacion(int ocup){
    float valor = (ocup * 100.0) / CAPACIDAD;
    if(valor < 35)
        printf("Baja\n");
    else if(valor <= 65)
        printf("Media\n");
    else
        printf("Alta\n"); 
    return valor;
}


 int main(){
    float p = ocupacion(10);
    printf("Porcentaje de ocupación: %.1f%%\n", p);
    p = ocupacion(60);
    printf("Porcentaje de ocupación: %.1f%%\n", p);
    p = ocupacion(90);
    printf("Porcentaje de ocupación: %.1f%%\n", p);
    return 0;
 }