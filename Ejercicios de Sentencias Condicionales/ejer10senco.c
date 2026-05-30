#include <stdio.h>

int main() {
    int tipo, edad_vehiculo;
    float toneladas, impuesto;
    int asignados;

    do {
        printf("Seleccione tipo (1: Liviano / 2: Motocicleta / 3: Pesado): ");
        asignados = scanf("%d", &tipo);
        while (getchar() != '\n');
        if (asignados != 1 || tipo < 1 || tipo > 3) printf("Error: Opción no válida.\n\n");
    } while (asignados != 1 || tipo < 1 || tipo > 3);

    do {
        printf("Ingrese los años de fabricación/antigüedad del vehículo: ");
        asignados = scanf("%d", &edad_vehiculo);
        while (getchar() != '\n');
        if (asignados != 1 || edad_vehiculo < 0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || edad_vehiculo < 0);

    if (tipo == 3 && edad_vehiculo <= 10) {
        do {
            printf("Ingrese el tonelaje del vehículo pesado: ");
            asignados = scanf("%f", &toneladas);
            while (getchar() != '\n');
            if (asignados != 1 || toneladas < 0.0) printf("Error: Entrada no válida.\n\n");
        } while (asignados != 1 || toneladas < 0.0);
    }

    if (edad_vehiculo > 10) {
        if (tipo == 1) impuesto = 20.0;
        else if (tipo == 2) impuesto = 10.0;
        else impuesto = 40.0;
    } else {
        if (tipo == 1) impuesto = 50.0;
        else if (tipo == 2) impuesto = 25.0;
        else {
            impuesto = 80.0;
            if (toneladas > 5.0) {
                impuesto = impuesto * 1.15;
                printf("Requiere transporte especial debido al tonelaje.\n");
            }
        }
    }

    printf("El total del impuesto vehicular es: $%.2f\n", impuesto);

    return 0;
}