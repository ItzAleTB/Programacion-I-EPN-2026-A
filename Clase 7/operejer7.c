#include <stdio.h>

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    int resultado = ((n < 10 || n > 20) && (n % 3 == 0));

    printf("Resultado: %d\n", resultado);

    return 0;
}