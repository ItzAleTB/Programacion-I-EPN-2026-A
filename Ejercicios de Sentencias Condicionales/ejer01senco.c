#include <stdio.h>

int main() {
    float x, y;
    int asignados;

    do {
        printf("Ingrese la coordenada X: ");
        asignados = scanf("%f", &x);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    do {
        printf("Ingrese la coordenada Y: ");
        asignados = scanf("%f", &y);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    if (x == 0.0 && y == 0.0) {
        printf("El punto está en el origen.\n");
    } else if (x == 0.0) {
        printf("El punto está sobre el eje Y.\n");
    } else if (y == 0.0) {
        printf("El punto está sobre el eje X.\n");
    } else if (x > 0.0) {
        if (y > 0.0) {
            printf("El punto está en el Cuadrante I.\n");
        } else {
            printf("El punto está en el Cuadrante IV.\n");
        }
    } else {
        if (y > 0.0) {
            printf("El punto está en el Cuadrante II.\n");
        } else {
            printf("El punto está en el Cuadrante III.\n");
        }
    }

    return 0;
}