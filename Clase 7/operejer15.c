#include <stdio.h>

int main() {
    int n;

    printf("Ingrese numero: ");
    scanf("%d", &n);

    while (n) {
        printf("%d\n", n);
        n = n & (n - 1);
    }

    return 0;
}