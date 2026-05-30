#include <stdio.h>

int main() {
    float saldo = 1000.0;
    float monto;
    int opcion, clave, clave_asignada = 8888;
    int asignados;

    printf("--- CAJERO AUTOMÁTICO ---\n");
    printf("1. Depósito\n");
    printf("2. Retiro\n");
    printf("3. Consulta de saldo\n");
    
    do {
        printf("Seleccione una opción: ");
        asignados = scanf("%d", &opcion);
        while (getchar() != '\n');
        if (asignados != 1 || opcion < 1 || opcion > 3) printf("Error: Opción inválida.\n\n");
    } while (asignados != 1 || opcion < 1 || opcion > 3);

    if (opcion == 3) {
        printf("Su saldo actual es: $%.2f\n", saldo);
    } else if (opcion == 1) {
        do {
            printf("Ingrese el monto a depositar: ");
            asignados = scanf("%f", &monto);
            while (getchar() != '\n');
            if (asignados != 1 || monto <= 0.0) printf("Error: Monto inválido.\n\n");
        } while (asignados != 1 || monto <= 0.0);
        saldo += monto;
        printf("Depósito exitoso. Nuevo saldo: $%.2f\n", saldo);
    } else {
        do {
            printf("Ingrese el monto a retirar (debe ser múltiplo de 10): ");
            asignados = scanf("%f", &monto);
            while (getchar() != '\n');
            if (asignados != 1 || monto <= 0.0 || ((int)monto % 10 != 0)) {
                printf("Error: No hay billetes de esa denominación disponible. Ingrese múltiplo de 10.\n\n");
                asignados = 0;
            }
        } while (asignados == 0);

        if (monto > saldo) {
            printf("Transacción rechazada: Saldo insuficiente.\n");
        } else {
            if (monto > 500.0) {
                do {
                    printf("Monto alto. Ingrese su clave de seguridad adicional de 4 dígitos: ");
                    asignados = scanf("%d", &clave);
                    while (getchar() != '\n');
                    if (asignados != 1) printf("Error: Entrada no válida.\n\n");
                } while (asignados != 1);

                if (clave != clave_asignada) {
                    printf("Transacción rechazada: Clave de seguridad incorrecta.\n");
                    return 0;
                }
            }
            saldo -= monto;
            printf("Retiro exitoso. Retire su dinero. Nuevo saldo: $%.2f\n", saldo);
        }
    }

    return 0;
}