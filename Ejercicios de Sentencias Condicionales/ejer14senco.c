#include <stdio.h>

int main() {
    float peso, altura, imc;
    int asignados;

    do {
        printf("Ingrese el peso en kg (mayor a 0): ");
        asignados = scanf("%f", &peso);
        while (getchar() != '\n');
        if (asignados != 1 || peso <= 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || peso <= 0.0);

    do {
        printf("Ingrese la altura en metros (mayor a 0): ");
        asignados = scanf("%f", &altura);
        while (getchar() != '\n');
        if (asignados != 1 || altura <= 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || altura <= 0.0);

    imc = peso / (altura * altura);
    printf("\nIMC calculado: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Clasificación: Bajo peso.\n");
    } else if (imc <= 24.9) {
        printf("Clasificación: Normal.\n");
    } else if (imc <= 29.9) {
        printf("Clasificación: Sobrepeso.\n");
    } else {
        if (imc <= 34.9) {
            printf("Clasificación: Obesidad Grado I.\n");
        } else if (imc <= 39.9) {
            printf("Clasificación: Obesidad Grado II.\n");
        } else {
            printf("Clasificación: Obesidad Grado III.\n");
        }
    }

    return 0;
}