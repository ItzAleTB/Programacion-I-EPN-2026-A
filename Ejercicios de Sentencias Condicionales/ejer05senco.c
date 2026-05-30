#include <stdio.h>

int main() {
    int n1, n2, n3;
    int asignados;

    do {
        printf("Ingrese el primer número entero: ");
        asignados = scanf("%d", &n1);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    do {
        printf("Ingrese el segundo número entero: ");
        asignados = scanf("%d", &n2);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    do {
        printf("Ingrese el tercer número entero: ");
        asignados = scanf("%d", &n3);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    printf("Orden descendente: ");
    if (n1 >= n2) {
        if (n1 >= n3) {
            if (n2 >= n3) {
                printf("%d, %d, %d\n", n1, n2, n3);
            } else {
                printf("%d, %d, %d\n", n1, n3, n2);
            }
        } else {
            printf("%d, %d, %d\n", n3, n1, n2);
        }
    } else {
        if (n2 >= n3) {
            if (n1 >= n3) {
                printf("%d, %d, %d\n", n2, n1, n3);
            } else {
                printf("%d, %d, %d\n", n2, n3, n1);
            }
        } else {
            printf("%d, %d, %d\n", n3, n2, n1);
        }
    }

    return 0;
}