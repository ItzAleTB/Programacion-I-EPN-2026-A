#include <stdio.h>

int main() {
    float a, b, c, d;
    int asignados;

    do {
        printf("Ingrese el coeficiente a (diferente de 0): ");
        asignados = scanf("%f", &a);
        while (getchar() != '\n');
        if (asignados != 1 || a == 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || a == 0.0);

    do {
        printf("Ingrese el coeficiente b: ");
        asignados = scanf("%f", &b);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    do {
        printf("Ingrese el coeficiente c: ");
        asignados = scanf("%f", &c);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    d = (b * b) - (4.0 * a * c);

    if (d > 0.0) {
        printf("Existen dos raíces reales distintas.\n");
    } else {
        if (d == 0.0) {
            printf("Existe una única raíz real.\n");
        } else {
            printf("Existen raíces complejas.\n");
        }
    }

    return 0;
}