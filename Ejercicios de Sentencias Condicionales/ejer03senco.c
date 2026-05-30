#include <stdio.h>

int main() {
    float l1, l2, l3, l4;
    int asignados;

    do {
        printf("Ingrese el lado 1 (base inferior): ");
        asignados = scanf("%f", &l1);
        while (getchar() != '\n');
        if (asignados != 1 || l1 <= 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || l1 <= 0.0);

    do {
        printf("Ingrese el lado 2 (base superior): ");
        asignados = scanf("%f", &l2);
        while (getchar() != '\n');
        if (asignados != 1 || l2 <= 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || l2 <= 0.0);

    do {
        printf("Ingrese el lado 3 (lateral izquierdo): ");
        asignados = scanf("%f", &l3);
        while (getchar() != '\n');
        if (asignados != 1 || l3 <= 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || l3 <= 0.0);

    do {
        printf("Ingrese el lado 4 (lateral derecho): ");
        asignados = scanf("%f", &l4);
        while (getchar() != '\n');
        if (asignados != 1 || l4 <= 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || l4 <= 0.0);

    if (l1 == l2 && l3 == l4) {
        if (l1 == l3) {
            printf("Es un Cuadrado.\n");
        } else {
            printf("Es un Rectángulo Estándar.\n");
        }
    } else {
        printf("No es un rectángulo válido (lados opuestos no son iguales).\n");
    }

    return 0;
}