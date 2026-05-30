#include <stdio.h>

int main() {
    float temp, resultado;
    int opcion;
    int asignados;

    do {
        printf("--- CONVERSOR DE TEMPERATURA ---\n");
        printf("1. Celsius a Fahrenheit\n");
        printf("2. Fahrenheit a Celsius\n");
        printf("3. Celsius a Kelvin\n");
        printf("4. Salir\n");

        do {
            printf("Seleccione una opción: ");
            asignados = scanf("%d", &opcion);
            while (getchar() != '\n');
            if (asignados != 1 || opcion < 1 || opcion > 4) {
                printf("Error: Opción no válida.\n\n");
            }
        } while (asignados != 1 || opcion < 1 || opcion > 4);

        if (opcion == 4) {
            break;
        }

        do {
            printf("Ingrese la temperatura a convertir: ");
            asignados = scanf("%f", &temp);
            while (getchar() != '\n');
            if (asignados != 1) {
                printf("Error: Entrada no válida.\n\n");
            }
        } while (asignados != 1);

        switch (opcion) {
            case 1:
                resultado = (temp * 1.8) + 32.0;
                printf("\n%.2f C equivale a %.2f F\n\n", temp, resultado);
                break;
            case 2:
                resultado = (temp - 32.0) / 1.8;
                printf("\n%.2f F equivale a %.2f C\n\n", temp, resultado);
                break;
            case 3:
                resultado = temp + 273.15;
                if (resultado < 0.0) {
                    printf("\nError: Temperatura físicamente imposible.\n\n");
                } else {
                    printf("\n%.2f C equivale a %.2f K\n\n", temp, resultado);
                }
                break;
        }
    } while (opcion != 4);

    return 0;
}