#include <stdio.h>

int main() {
    float pts1, pts2;
    int dir1, dir2, neg1, neg2;
    int asignados;

    do {
        printf("Puntos totales Jugador 1: ");
        asignados = scanf("%f", &pts1);
        while (getchar() != '\n');
        if (asignados != 1 || pts1 < 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || pts1 < 0.0);

    do {
        printf("Puntos totales Jugador 2: ");
        asignados = scanf("%f", &pts2);
        while (getchar() != '\n');
        if (asignados != 1 || pts2 < 0.0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || pts2 < 0.0);

    do {
        printf("Resultado enfrentamiento directo (1: Ganó J1 / 2: Ganó J2 / 0: Empate o no hubo): ");
        asignados = scanf("%d", &dir1);
        while (getchar() != '\n');
        if (asignados != 1 || dir1 < 0 || dir1 > 2) printf("Error: Opción no válida.\n\n");
    } while (asignados != 1 || dir1 < 0 || dir1 > 2);

    do {
        printf("Victorias con piezas negras Jugador 1: ");
        asignados = scanf("%d", &neg1);
        while (getchar() != '\n');
        if (asignados != 1 || neg1 < 0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || neg1 < 0);

    do {
        printf("Victorias con piezas negras Jugador 2: ");
        asignados = scanf("%d", &neg2);
        while (getchar() != '\n');
        if (asignados != 1 || neg2 < 0) printf("Error: Entrada no válida.\n\n");
    } while (asignados != 1 || neg2 < 0);

    if (pts1 > pts2) {
        printf("\nGanador: Jugador 1 (Por puntos totales).\n");
    } else if (pts2 > pts1) {
        printf("\nGanador: Jugador 2 (Por puntos totales).\n");
    } else {
        if (dir1 == 1) {
            printf("\nGanador: Jugador 1 (Por enfrentamiento directo).\n");
        } else if (dir1 == 2) {
            printf("\nGanador: Jugador 2 (Por enfrentamiento directo).\n");
        } else {
            if (neg1 > neg2) {
                printf("\nGanador: Jugador 1 (Por victorias con piezas negras).\n");
            } else if (neg2 > neg1) {
                printf("\nGanador: Jugador 2 (Por victorias con piezas negras).\n");
            } else {
                printf("\nEmpate absoluto persistente. Requiere sorteo.\n");
            }
        }
    }

    return 0;
}