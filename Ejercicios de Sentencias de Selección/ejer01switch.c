#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int opcion;
    int asignados;

    do {
        printf("--- CALCULADORA ---\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        
        do {
            printf("Seleccione una opción: ");
            asignados = scanf("%d", &opcion);
            while (getchar() != '\n');
            if (asignados != 1 || opcion < 1 || opcion > 5) {
                printf("Error: Opción no válida.\n\n");
            }
        } while (asignados != 1 || opcion < 1 || opcion > 5);

        if (opcion == 5) {
            break;
        }

        do {
            printf("Ingrese el primer número: ");
            asignados = scanf("%f", &num1);
            while (getchar() != '\n');
            if (asignados != 1) {
                printf("Error: Entrada no válida.\n\n");
            }
        } while (asignados != 1);

        do {
            printf("Ingrese el segundo número: ");
            asignados = scanf("%f", &num2);
            while (getchar() != '\n');
            if (asignados != 1 || (opcion == 4 && num2 == 0.0)) {
                printf("Error: Entrada no válida o división por cero.\n\n");
            }
        } while (asignados != 1 || (opcion == 4 && num2 == 0.0));

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                printf("\nResultado: %.2f + %.2f = %.2f\n\n", num1, num2, resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("\nResultado: %.2f - %.2f = %.2f\n\n", num1, num2, resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("\nResultado: %.2f * %.2f = %.2f\n\n", num1, num2, resultado);
                break;
            case 4:
                resultado = num1 / num2;
                printf("\nResultado: %.2f / %.2f = %.2f\n\n", num1, num2, resultado);
                break;
        }
    } while (opcion != 5);

    return 0;
}