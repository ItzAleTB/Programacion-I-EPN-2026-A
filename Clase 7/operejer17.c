#include <stdio.h>

int main() {
    int A, B;

    printf("Ingrese A y B: ");
    scanf("%d%d", &A, &B);

    int suma = A + B;

    int overflow = ((A ^ suma) & (B ^ suma)) < 0;

    printf("Overflow: %d\n", overflow);

    return 0;
}