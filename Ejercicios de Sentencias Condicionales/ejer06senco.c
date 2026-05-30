#include <stdio.h>

int main() {
    int tipo;
    float monto, total;
    int asignados;

    do {
        printf("Seleccione tipo de cliente (1: Frecuente / 2: General): ");
        asignados = scanf("%d", &tipo);
        while (getchar() != '\n');
        if (asignados != 1 || tipo < 1 || tipo > 2) printf("Error: Opción no válida.\n\n");
    } while (asignados != 1 || tipo < 1 || tipo > 2);

    do {
        printf("Ingrese el monto de la compra: ");
        asignados = scanf("%f", &monto);
        while (getchar() != '\n');
        if (asignados != 1 || monto < 0.0) printf("Error: El monto no puede ser negativo.\n\n");
    } while (asignados != 1 || monto < 0.0);

    if (monto > 500.0) {
        if (tipo == 1) {
            total = monto * 0.80;
            printf("Descuento del 20%% aplicado.\n");
        } else {
            total = monto * 0.90;
            printf("Descuento del 10%% aplicado.\n");
        }
    } else {
        total = monto;
        printf("Sin descuento aplicado.\n");
    }

    printf("Total a pagar: $%.2f\n", total);

    return 0;
}