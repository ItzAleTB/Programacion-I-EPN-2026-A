#include <stdio.h>

int main() {
    float s;
    int asignados;
    float x;
    float raiz;
    float margen = 0.00001;
    float diferencia;

    do {
        printf("Ingrese un número para calcular su raíz cuadrada (mayor o igual a 0): ");
        asignados = scanf("%f", &s);
        while (getchar() != '\n');
        if (asignados != 1 || s < 0.0) {
            printf("Error: Entrada no válida.\n\n");
        }
    } while (asignados != 1 || s < 0.0);

    if (s == 0.0) {
        printf("\nLa raíz cuadrada de 0 es: 0.00000\n");
        return 0;
    }

    x = s;
    raiz = (x + s / x) / 2.0;

    while (1) {
        diferencia = raiz - x;
        if (diferencia < 0) {
            diferencia = -diferencia;
        }

        if (diferencia < margen) {
            break;
        }

        x = raiz;
        raiz = (x + s / x) / 2.0;
    }

    printf("\nLa raíz cuadrada aproximada de %.2f es: %.2f\n", s, raiz);

    return 0;
}