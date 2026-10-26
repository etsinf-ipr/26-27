#include <stdio.h>

int main() {
    int a, b, res;
    char op;

    printf("Operacion: ");
    scanf("%d%c%d", &a, &op, &b);

    switch (op) {
    case '+': res = a + b; break;
    case '-': res = a - b; break;
    case '*': res = a * b; break;
    case '/': res = a / b; break;
    default: printf("opracion no válida\n");
    }

    printf(" %d %c %d = %d\n",a,op,b,res);
    return 0;
}