#include <stdio.h>

int main() {
    int x;

    printf("Ingrese numero: ");
    scanf("%d", &x);

    int bit0 = (x >> 0) & 1;
    int bit3 = (x >> 3) & 1;

    if (bit0 != bit3) {
        x ^= (1 << 0) | (1 << 3);
    }

    printf("Resultado: %d\n", x);

    return 0;
}