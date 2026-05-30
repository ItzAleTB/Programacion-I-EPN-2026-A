#include <stdio.h>

int main() {
    int d, m, a, dias_mes, bisiesto;
    int asignados;
    int valida = 1;

    do {
        printf("Ingrese el día: ");
        asignados = scanf("%d", &d);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    do {
        printf("Ingrese el mes: ");
        asignados = scanf("%d", &m);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    do {
        printf("Ingrese el año: ");
        asignados = scanf("%d", &a);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    if (a < 1 || m < 1 || m > 12) {
        valida = 0;
    } else {
        bisiesto = ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) ? 1 : 0;

        if (m == 2) {
            if (bisiesto == 1) dias_mes = 29;
            else dias_mes = 28;
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            dias_mes = 30;
        } else {
            dias_mes = 31;
        }

        if (d < 1 || d > dias_mes) {
            valida = 0;
        }
    }

    if (valida == 1) {
        printf("La fecha %02d/%02d/%04d es VÁLIDA.\n", d, m, a);
    } else {
        printf("La fecha ingresada NO es válida.\n");
    }

    return 0;
}