#include <stdio.h>

int main() {
    float mat, fis, geo, qui, promedio;
    int asignados;
    int nota_baja = 0;

    do {
        printf("Nota de Matemática (0-100): ");
        asignados = scanf("%f", &mat);
        while (getchar() != '\n');
        if (asignados != 1 || mat < 0.0 || mat > 100.0) printf("Error: Nota inválida.\n\n");
    } while (asignados != 1 || mat < 0.0 || mat > 100.0);

    do {
        printf("Nota de Física (0-100): ");
        asignados = scanf("%f", &fis);
        while (getchar() != '\n');
        if (asignados != 1 || fis < 0.0 || fis > 100.0) printf("Error: Nota inválida.\n\n");
    } while (asignados != 1 || fis < 0.0 || fis > 100.0);

    do {
        printf("Nota de Geometría (0-100): ");
        asignados = scanf("%f", &geo);
        while (getchar() != '\n');
        if (asignados != 1 || geo < 0.0 || geo > 100.0) printf("Error: Nota inválida.\n\n");
    } while (asignados != 1 || geo < 0.0 || geo > 100.0);

    do {
        printf("Nota de Química (0-100): ");
        asignados = scanf("%f", &qui);
        while (getchar() != '\n');
        if (asignados != 1 || qui < 0.0 || qui > 100.0) printf("Error: Nota inválida.\n\n");
    } while (asignados != 1 || qui < 0.0 || qui > 100.0);

    if (mat < 70.0 || fis < 70.0 || geo < 70.0 || qui < 70.0) {
        nota_baja = 1;
    }

    promedio = (mat + fis + geo + qui) / 4.0;

    if (promedio >= 80.0) {
        if (promedio >= 95.0) {
            printf("Resultado: Admitido - ¡Beca Total!\n");
        } else if (nota_baja == 1) {
            printf("Resultado: Admitido - Curso de Nivelación.\n");
        } else {
            printf("Resultado: Admitido Regular.\n");
        }
    } else {
        printf("Resultado: No Admitido.\n");
    }

    return 0;
}