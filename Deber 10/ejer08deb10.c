#include <stdio.h>

int main() {
    int n;
    int asignados;
    int i;
    int es_primo = 1;

    do {
        printf("Ingrese un número entero positivo (mayor que 0): ");
        asignados = scanf("%d", &n);
        while (getchar() != '\n');
        if (asignados != 1 || n <= 0) {
            printf("Error: Entrada no válida. Debe ser mayor que 0.\n\n");
        }
    } while (asignados != 1 || n <= 0);

    if (n == 1) {
        es_primo = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                es_primo = 0;
                break;
            }
        }
    }

    if (es_primo == 1) {
        printf("\nEl número %d es PRIMO.\n", n);
    } else {
        printf("\nEl número %d NO es primo.\n", n);
    }

    return 0;
}