#include <stdio.h>

int main() {
    int j1, j2;
    int asignados;

    do {
        printf("Jugador 1 (1: Piedra / 2: Papel / 3: Tijera): ");
        asignados = scanf("%d", &j1);
        while (getchar() != '\n');
        if (asignados != 1 || j1 < 1 || j1 > 3) printf("Error: Opción no válida.\n\n");
    } while (asignados != 1 || j1 < 1 || j1 > 3);

    do {
        printf("Jugador 2 (1: Piedra / 2: Papel / 3: Tijera): ");
        asignados = scanf("%d", &j2);
        while (getchar() != '\n');
        if (asignados != 1 || j2 < 1 || j2 > 3) printf("Error: Opción no válida.\n\n");
    } while (asignados != 1 || j2 < 1 || j2 > 3);

    if (j1 == j2) {
        printf("Empate.\n");
    } else if ((j1 == 1 && j2 == 3) || (j1 == 2 && j2 == 1) || (j1 == 3 && j2 == 2)) {
        printf("¡Gana el Jugador 1!\n");
    } else {
        printf("¡Gana el Jugador 2!\n");
    }

    return 0;
}