#include <stdio.h>

struct hora{
    int h, m;
};

int main() {
    struct hora t;
    printf("Hora (hora:min): ");
    scanf("%d:%d", &t.h, &t.m);
    
    printf("%02d:%02d\n", t.h, t.m);

    return 0;
}