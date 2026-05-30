#include <stdio.h>

int main() {
    int n;
    int asignados;
    int i, j;
    int estrellas;

    do {
        printf("Ingrese el número máximo de filas N (mayor que 0): ");
        asignados = scanf("%d", &n);
        while (getchar() != '\n');
        if (asignados != 1 || n <= 0) {
            printf("Error: Entrada no válida.\n\n");
        }
    } while (asignados != 1 || n <= 0);

    printf("\n");

    for (i = 1; i <= (2 * n - 1); i++) {
        if (i <= n) {
            estrellas = i;
        } else {
            estrellas = 2 * n - i;
        }

        for (j = 1; j <= estrellas; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}