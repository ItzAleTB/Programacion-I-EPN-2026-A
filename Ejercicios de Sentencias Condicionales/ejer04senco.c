#include <stdio.h>

int main() {
    float r, h, k, x, y, d_cuadrado, r_cuadrado;
    int asignados;

    do {
        printf("Ingrese el radio del círculo: ");
        asignados = scanf("%f", &r);
        while (getchar() != '\n');
        if (asignados != 1 || r <= 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || r <= 0.0);

    do {
        printf("Ingrese el centro h: ");
        asignados = scanf("%f", &h);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    do {
        printf("Ingrese el centro k: ");
        asignados = scanf("%f", &k);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    do {
        printf("Ingrese la posición X del punto: ");
        asignados = scanf("%f", &x);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    do {
        printf("Ingrese la posición Y del punto: ");
        asignados = scanf("%f", &y);
        while (getchar() != '\n');
        if (asignados != 1) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1);

    d_cuadrado = ((x - h) * (x - h)) + ((y - k) * (y - k));
    r_cuadrado = r * r;

    if (d_cuadrado < r_cuadrado) {
        printf("El punto está dentro del círculo.\n");
    } else if (d_cuadrado == r_cuadrado) {
        printf("El punto está sobre la circunferencia.\n");
    } else {
        printf("El punto está fuera del círculo.\n");
    }

    return 0;
}