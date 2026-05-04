#include <stdio.h>

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    int esPar = !(n & 1);

    printf("Es par: %d\n", esPar);

    return 0;
}