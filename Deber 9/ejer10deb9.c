#include <stdio.h>

int main() {

    int a = 0, b = 1;
    int total_filas = 5;

    for (int i = 1; i <= total_filas; i++) {
        int limite_elementos = (i == 1) ? 1 : (i - 1);

        for (int j = 0; j < limite_elementos; j++) {
            printf("%d", a);

            if (j < limite_elementos - 1) {
                printf(" ");
            }

            int siguiente = a + b;
            a = b;
            b = siguiente;
        }
        printf("\n");
    }

    return 0;
}
