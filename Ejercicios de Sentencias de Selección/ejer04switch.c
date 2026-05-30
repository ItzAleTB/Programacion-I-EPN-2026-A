#include <stdio.h>

int main() {
    int opcion, cantidad, carnet;
    int asignados;
    float precio_unitario, total;

    printf("--- SISTEMA DE RESERVAS DE CINE ---\n");
    printf("1. Entrada General: $7.00\n");
    printf("2. Entrada Estudiante: $5.00\n");
    printf("3. Entrada Tercera Edad: $3.50\n");

    do {
        printf("Seleccione tipo de entrada (1-3): ");
        asignados = scanf("%d", &opcion);
        while (getchar() != '\n');
        if (asignados != 1 || opcion < 1 || opcion > 3) {
            printf("Error: Opción no válida.\n\n");
        }
    } while (asignados != 1 || opcion < 1 || opcion > 3);

    do {
        printf("Ingrese la cantidad de boletos (mayor a 0): ");
        asignados = scanf("%d", &cantidad);
        while (getchar() != '\n');
        if (asignados != 1 || cantidad <= 0) {
            printf("Error: Cantidad inválida.\n\n");
        }
    } while (asignados != 1 || cantidad <= 0);

    switch (opcion) {
        case 1:
            precio_unitario = 7.0;
            break;
        case 2:
            do {
                printf("¿Tiene carnet estudiantil? (1: Sí / 0: No): ");
                asignados = scanf("%d", &carnet);
                while (getchar() != '\n');
                if (asignados != 1 || (carnet != 0 && carnet != 1)) {
                    printf("Error: Ingrese solo 1 o 0.\n\n");
                }
            } while (asignados != 1 || (carnet != 0 && carnet != 1));

            if (carnet == 1) {
                precio_unitario = 5.0;
            } else {
                precio_unitario = 7.0;
                printf("Precio cambiado automáticamente a General.\n");
            }
            break;
        case 3:
            precio_unitario = 3.5;
            break;
    }

    total = precio_unitario * cantidad;
    printf("\nTotal a pagar por %d boletos: $%.2f\n", cantidad, total);

    return 0;
}