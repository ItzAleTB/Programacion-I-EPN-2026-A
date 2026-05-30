#include <stdio.h>

int main() {
    float a, b, c, mayor, cat1, cat2;
    int asignados;

    do {
        printf("Ingrese el lado 1: ");
        asignados = scanf("%f", &a);
        while (getchar() != '\n');
        if (asignados != 1 || a <= 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || a <= 0.0);

    do {
        printf("Ingrese el lado 2: ");
        asignados = scanf("%f", &b);
        while (getchar() != '\n');
        if (asignados != 1 || b <= 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || b <= 0.0);

    do {
        printf("Ingrese el lado 3: ");
        asignados = scanf("%f", &c);
        while (getchar() != '\n');
        if (asignados != 1 || c <= 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || c <= 0.0);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("Clasificación por lados: Equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Clasificación por lados: Isósceles.\n");
        } else {
            printf("Clasificación por lados: Escaleno.\n");
        }

        if (a >= b && a >= c) {
            mayor = a; cat1 = b; cat2 = c;
        } else if (b >= a && b >= c) {
            mayor = b; cat1 = a; cat2 = c;
        } else {
            mayor = c; cat1 = a; cat2 = b;
        }

        if ((cat1 * cat1 + cat2 * cat2) == (mayor * mayor)) {
            printf("Clasificación por ángulos: Rectángulo.\n");
        } else if ((cat1 * cat1 + cat2 * cat2) > (mayor * mayor)) {
            printf("Clasificación por ángulos: Acutángulo.\n");
        } else {
            printf("Clasificación por ángulos: Obtusángulo.\n");
        }
    } else {
        printf("Los lados ingresados no forman un triángulo válido.\n");
    }

    return 0;
}