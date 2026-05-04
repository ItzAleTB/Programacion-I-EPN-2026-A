#include <stdio.h>

int main() {
    int n;

    printf("Ingrese numero: ");
    scanf("%d", &n);

    int resultado = (n > 0) && !(n & (n - 1));

    printf("Es potencia de 2: %d\n", resultado);

    return 0;
}