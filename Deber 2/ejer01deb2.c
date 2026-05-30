#include <stdio.h>

int main() {
    float celsius;
    float fahrenheit;
    int asignados;

    do {
        printf("Ingrese la temperatura en grados Centígrados: ");
        asignados = scanf("%f", &celsius);
        while (getchar() != '\n');
        if (asignados != 1) {
            printf("Error: Entrada no válida.\n\n");
        }
    } while (asignados != 1);

    fahrenheit = (celsius * 1.8) + 32.0;

    printf("\n%.2f grados Centígrados equivalen a %.2f grados Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}