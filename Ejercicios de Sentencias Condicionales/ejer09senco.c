#include <stdio.h>

int main() {
    int edad;
    float salario, valor_propiedad, tasa, cuota;
    int asignados;

    do {
        printf("Ingrese la edad: ");
        asignados = scanf("%d", &edad);
        while (getchar() != '\n');
        if (asignados != 1 || edad < 0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || edad < 0);

    do {
        printf("Ingrese el salario mensual: ");
        asignados = scanf("%f", &salario);
        while (getchar() != '\n');
        if (asignados != 1 || salario < 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || salario < 0.0);

    do {
        printf("Ingrese el valor de la propiedad: ");
        asignados = scanf("%f", &valor_propiedad);
        while (getchar() != '\n');
        if (asignados != 1 || valor_propiedad < 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || valor_propiedad < 0.0);

    do {
        printf("Ingrese la tasa de interés anual (forma decimal, ej: 0.05): ");
        asignados = scanf("%f", &tasa);
        while (getchar() != '\n');
        if (asignados != 1 || tasa < 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || tasa < 0.0);

    if (edad >= 18 && edad <= 65 && salario > 1200.0) {
        cuota = (valor_propiedad * (1.0 + tasa)) / 240.0;
        if (salario < 2000.0) {
            if (cuota <= (salario * 0.30)) {
                printf("Crédito Aprobado. Cuota mensual: $%.2f\n", cuota);
            } else {
                printf("Crédito Denegado: La cuota mensual excede el 30%% del sueldo.\n");
            }
        } else {
            printf("Crédito Aprobado. Cuota mensual: $%.2f\n", cuota);
        }
    } else {
        printf("Crédito Denegado: No cumple con los requisitos base de edad o salario.\n");
    }

    return 0;
}