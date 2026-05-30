#include <stdio.h>

int main() {
    int matriz[5][5];
    int v;
    int asignados;
    int i, j;
    int coincidencias = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            do {
                printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
                asignados = scanf("%d", &matriz[i][j]);
                while (getchar() != '\n');
                if (asignados != 1) {
                    printf("Error: Entrada no válida.\n\n");
                }
            } while (asignados != 1);
        }
    }

    do {
        printf("\nIngrese el valor V a buscar: ");
        asignados = scanf("%d", &v);
        while (getchar() != '\n');
        if (asignados != 1) {
            printf("Error: Entrada no válida.\n\n");
        }
    } while (asignados != 1);

    printf("\nBuscando el valor %d...\n", v);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == v) {
                printf("Encontrado en la posición (%d, %d)\n", i, j);
                coincidencias++;
            }
        }
    }

    if (coincidencias == 0) {
        printf("El valor %d no se encuentra en la matriz.\n", v);
    } else {
        printf("Total de veces encontrado: %d\n", coincidencias);
    }

    return 0;
}