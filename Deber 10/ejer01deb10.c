#include <stdio.h>

int main() {
    int num1, num2;
    int asignados;
    int mcm;

    do {
        printf("Ingrese el primer número entero (mayor que 0): ");
        asignados = scanf("%d", &num1);
        
        while (getchar() != '\n');

        if (asignados != 1 || num1 <= 0) {
            printf("Error: Entrada no válida.\n\n");
        }
    } while (asignados != 1 || num1 <= 0);

    do {
        printf("Ingrese el segundo número entero (mayor que 0): ");
        asignados = scanf("%d", &num2);
        
        while (getchar() != '\n');

        if (asignados != 1 || num2 <= 0) {
            printf("Error: Entrada no válida.\n\n");
        }
    } while (asignados != 1 || num2 <= 0);

    mcm = (num1 > num2) ? num1 : num2;

    while (1) {
        if (mcm % num1 == 0 && mcm % num2 == 0) {
            break; 
        }
        mcm++; 
    }

    printf("\nEl MCM de %d y %d es: %d\n", num1, num2, mcm);

    return 0;
}