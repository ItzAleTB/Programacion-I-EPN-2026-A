#include <stdio.h>

int main(void) {
    float bas, alt, are, per;

    // Solicitar datos al usuario
    printf("Ingrese la base del rectangulo: ");
    scanf("%f", &bas);
    printf("Ingrese la altura del rectangulo: ");
    scanf("%f", &alt);

    // Calcular area y perimetro
    are = bas * alt;
    per = 2 * (bas + alt);

    // Mostrar resultados
    printf("\n--- Resultados ---\n");
    printf("Area: %.2f\n", are);
    printf("Perimetro: %.2f\n", per);

    return 0;
}
