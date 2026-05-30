#include <stdio.h>

int main() {
    float horas, pago_hora, sueldo;
    int asignados;

    do {
        printf("Ingrese las horas trabajadas: ");
        asignados = scanf("%f", &horas);
        while (getchar() != '\n');
        if (asignados != 1 || horas < 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || horas < 0.0);

    do {
        printf("Ingrese el pago por hora: ");
        asignados = scanf("%f", &pago_hora);
        while (getchar() != '\n');
        if (asignados != 1 || pago_hora < 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || pago_hora < 0.0);

    if (horas <= 40.0) {
        sueldo = horas * pago_hora;
    } else if (horas <= 50.0) {
        sueldo = (40.0 * pago_hora) + ((horas - 40.0) * pago_hora * 2.0);
    } else {
        sueldo = (40.0 * pago_hora) + (10.0 * pago_hora * 2.0) + ((horas - 50.0) * pago_hora * 3.0);
    }

    printf("El sueldo total es: $%.2f\n", sueldo);

    return 0;
}