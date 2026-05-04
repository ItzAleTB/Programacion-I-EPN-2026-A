#include <stdio.h>

int main() {
    char c;

    printf("Ingrese letra: ");
    scanf(" %c", &c);

    char resultado = ((c - 'a' + 3) % 26) + 'a';

    printf("Resultado: %c\n", resultado);

    return 0;
}