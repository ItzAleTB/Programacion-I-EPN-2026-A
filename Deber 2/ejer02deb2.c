#include <stdio.h>

int main() {
    float base, altura;
    float area, perimetro;
    int asignados;

    do {
        printf("Ingrese la base del rectángulo (mayor a 0): ");
        asignados = scanf("%f", &base);
        while (getchar() != '\n');
        if (asignados != 1 || base <= 0.0) {
            printf("Error: Entrada no válida.\n\n");
        }
    } while (asignados != 1 || base <= 0.0);

    do {
        printf("Ingrese la altura del rectángulo (mayor a 0): ");
        asignados = scanf("%f", &altura);
        while (getchar() != '\n');
        if (asignados != 1 || altura <= 0.0) {
            printf("Error: Entrada no válida.\n\n");
        }
    } while (asignados != 1 || altura <= 0.0);

    area = base * altura;
    perimetro = 2.0 * (base + altura);

    printf("\nResultados del Rectángulo:\n");
    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);

    return 0;
}