#include <stdio.h>

int main(void) {
    float fahr, cel;

    // Solicitar al usuario la temperatura en Fahrenheit
    printf("Ingrese grados Fahrenheit: ");
    scanf("%f", &fahr);

    // Calcular la conversion

    cel = (fahr - 32.0) * 5.0 / 9.0;

    // Mostrar el resultado con dos decimales
    printf("%.2f grados Fahrenheit son %.2f grados Celsius.\n", fahr, cel);

    return 0;
}
