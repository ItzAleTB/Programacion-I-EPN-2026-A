#include <stdio.h>

int main() {
    int decimal;
    int asignados;
    int binario = 0;
    int posicion = 1;
    int residuo;

    do {
        printf("Ingrese un número decimal positivo: ");
        asignados = scanf("%d", &decimal);
        while (getchar() != '\n');
        if (asignados != 1 || decimal < 0) {
            printf("Error: Entrada no válida.\n\n");
        }
    } while (asignados != 1 || decimal < 0);

    if (decimal == 0) {
        printf("\nEl número en binario es: 0\n");
        return 0;
    }

    while (decimal > 0) {
        residuo = decimal % 2;
        binario = binario + (residuo * posicion);
        posicion = posicion * 10;
        decimal = decimal / 2;
    }

    printf("\nEl número en binario es: %d\n", binario);

    return 0;
}