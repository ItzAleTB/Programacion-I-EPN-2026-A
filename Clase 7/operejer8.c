#include <stdio.h>

int main() {
    int a, b;

    printf("Ingrese a: ");
    scanf("%d", &a);

    printf("Ingrese b: ");
    scanf("%d", &b);

    int resultado = ((a ^ b) < 0);

    printf("Signos opuestos: %d\n", resultado);

    return 0;
}