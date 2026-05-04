#include <stdio.h>

int main() {
    unsigned int rgb;

    printf("Ingrese color RGB en hexadecimal: ");
    scanf("%x", &rgb);

    unsigned int verde = (rgb >> 8) & 255;

    printf("Componente verde: %u\n", verde);

    return 0;
}
