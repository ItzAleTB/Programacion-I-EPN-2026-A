#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Ingrese a, b, c, d: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int resultado = (a > b) || (c == d);

    printf("Resultado: %d\n", resultado);

    return 0;
}