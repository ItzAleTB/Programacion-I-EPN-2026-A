#include <stdio.h>

int main() {
    float t, p, o;
    int asignados;

    do {
        printf("Ingrese la Temperatura (T): ");
        asignados = scanf("%f", &t);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    do {
        printf("Ingrese la Presión (P): ");
        asignados = scanf("%f", &p);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    do {
        printf("Ingrese el Nivel de Oxígeno (O): ");
        asignados = scanf("%f", &o);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    if (t > 100.0 && p > 50.0) {
        printf("\nALERTA ROJA: EVACUAR\n");
    } else if (t > 100.0 && o > 20.0) {
        printf("\nAlerta Amarilla.\n");
    } else if (t < 100.0 && p < 50.0) {
        printf("\nSistema Estable.\n");
    } else {
        printf("\nCondición indeterminada/Revisión manual requerida.\n");
    }

    return 0;
}