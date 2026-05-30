#include <stdio.h>

int main() {
    float kwh, total;
    int asignados;

    do {
        printf("Ingrese el consumo en kWh: ");
        asignados = scanf("%f", &kwh);
        while (getchar() != '\n');
        if (asignados != 1 || kwh < 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || kwh < 0.0);

    if (kwh <= 100.0) {
        total = kwh * 0.10;
    } else if (kwh <= 300.0) {
        total = (100.0 * 0.10) + ((kwh - 100.0) * 0.15);
    } else {
        total = (100.0 * 0.10) + (200.0 * 0.15) + ((kwh - 300.0) * 0.25);
    }

    printf("El total a pagar por la planilla es: $%.2f\n", total);

    return 0;
}