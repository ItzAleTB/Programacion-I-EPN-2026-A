#include <stdio.h>

int main() {
    int stock;
    int asignados;
    int i = 1;
    int cantidad;
    int opcion;

    do {
        printf("Ingrese el stock inicial del producto (mayor o igual a 0): ");
        asignados = scanf("%d", &stock);
        while (getchar() != '\n');
        if (asignados != 1 || stock < 0) {
            printf("Error: Entrada no válida.\n\n");
        }
    } while (asignados != 1 || stock < 0);

    while (i <= 10) {
        printf("\n[Transacción %d/10] - Stock actual: %d\n", i, stock);
        
        do {
            printf("Seleccione tipo (1 = COMPRA, 2 = VENTA): ");
            asignados = scanf("%d", &opcion);
            while (getchar() != '\n');
            if (asignados != 1 || opcion < 1 || opcion > 2) {
                printf("Error: Opción no válida.\n");
            }
        } while (asignados != 1 || opcion < 1 || opcion > 2);

        do {
            printf("Ingrese la cantidad de unidades (mayor a 0): ");
            asignados = scanf("%d", &cantidad);
            while (getchar() != '\n');
            if (asignados != 1 || cantidad <= 0) {
                printf("Error: Cantidad no válida.\n");
            }
        } while (asignados != 1 || cantidad <= 0);

        switch (opcion) {
            case 1:
                stock += cantidad;
                printf("Compra procesada. Nuevo stock: %d\n", stock);
                break;
            case 2:
                if (stock - cantidad < 0) {
                    printf("Aviso: Venta rechazada. Stock insuficiente.\n");
                } else {
                    stock -= cantidad;
                    printf("Venta procesada. Nuevo stock: %d\n", stock);
                }
                break;
        }

        i++;
    }


    printf("Simulación finalizada. Stock de cierre: %d\n", stock);

    return 0;
}