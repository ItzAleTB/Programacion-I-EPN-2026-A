#include <stdio.h>

int main() {
    float x, min, max;

    printf("Ingrese x: ");
    scanf("%f", &x);

    printf("Ingrese minimo: ");
    scanf("%f", &min);

    printf("Ingrese maximo: ");
    scanf("%f", &max);

    float resultado = (x - min) / (max - min);

    printf("Normalizado: %.2f\n", resultado);

    return 0;
}