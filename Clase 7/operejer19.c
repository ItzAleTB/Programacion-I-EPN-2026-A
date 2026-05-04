#include <stdio.h>

int main() {
    int i, j, M;

    printf("Ingrese fila: ");
    scanf("%d", &i);

    printf("Ingrese columna: ");
    scanf("%d", &j);

    printf("Ingrese numero de columnas: ");
    scanf("%d", &M);

    int indice = i * M + j;

    printf("Indice lineal: %d\n", indice);

    return 0;
}