#include <stdio.h>

int main() {
    int n;

    printf("Ingrese numero: ");
    scanf("%d", &n);

    n = ~n + 1;

    printf("Resultado: %d\n", n);

    return 0;
}