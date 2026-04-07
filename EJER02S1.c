#include <stdio.h>

int main(void) {
    float cel, fahr;

    // Solicitar al usuario la temperatura en Celsius
    printf("Ingrese grados Celsius: ");
    scanf("%f", &cel);

    // Fórmula de conversión: (C * 9/5) + 32
    fahr = (cel * 1.8) + 32;

    printf("%.2f grados Celsius equivalen a %.2f grados Fahrenheit.\n", cel, fahr);

    return 0;
}
