#include <stdio.h>

int main() {
    int edad;
    int asignados;

    do {
        printf("Ingrese la edad: ");
        asignados = scanf("%d", &edad);
        while (getchar() != '\n');
        if (asignados != 1 || edad < 0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || edad < 0);

    if (edad <= 5) {
        printf("Etapa de vida: Infante.\n");
    } else if (edad <= 12) {
        printf("Etapa de vida: Niño.\n");
    } else if (edad <= 17) {
        printf("Etapa de vida: Adolescente.\n");
        if (edad >= 16) {
            printf("Nota: Ya tiene edad legal para obtener la cédula de identidad.\n");
        } else {
            printf("Nota: No tiene edad suficiente para la cédula de identidad por cuenta propia.\n");
        }
    } else if (edad <= 64) {
        printf("Etapa de vida: Adulto.\n");
    } else {
        printf("Etapa de vida: Adulto Mayor.\n");
    }

    return 0;
}