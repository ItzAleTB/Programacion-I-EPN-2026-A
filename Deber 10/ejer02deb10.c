#include <stdio.h>

int main() {
    int s, l;
    int asignados;
    int suma = 0;

    do {
        printf("Ingrese el número inicial S: ");
        asignados = scanf("%d", &s);
        while (getchar() != '\n');
        if (asignados != 1) {
            printf("Error: Entrada no válida.\n\n");
        }
    } while (asignados != 1);

    do {
        printf("Ingrese el límite L: ");
        asignados = scanf("%d", &l);
        while (getchar() != '\n');
        if (asignados != 1) {
            printf("Error: Entrada no válida.\n\n");
        }
    } while (asignados != 1);

    if (s % 2 == 0) {
        s++;
    }

    while (suma <= l) {
        suma += s;
        s += 2;
    }

    printf("\nLa suma acumulada final es: %d\n", suma);

    return 0;
}