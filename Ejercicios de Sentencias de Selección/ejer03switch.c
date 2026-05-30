#include <stdio.h>

int main() {
    float peso, total, precio_por_kg;
    char destino;
    int asignados;

    do {
        printf("Ingrese el peso del paquete en kg (mayor a 0): ");
        asignados = scanf("%f", &peso);
        while (getchar() != '\n');
        if (asignados != 1 || peso <= 0.0) {
            printf("Error: Entrada no válida.\n\n");
        }
    }while (asignados != 1 || peso <= 0.0);

    do {
        printf("Seleccione el destino (A = América, E = Europa, O = Otros): ");
        asignados = scanf(" %c", &destino);
        while (getchar() != '\n');
        if (destino != 'A' && destino != 'a' && destino != 'E' && destino != 'e' && destino != 'O' && destino != 'o') {
            printf("Error: Destino inválido.\n\n");
            asignados = 0;
        }
    } while (asignados == 0);

    switch (destino) {
        case 'A':
        case 'a':
            precio_por_kg = 5.0;
            break;
        case 'E':
        case 'e':
            precio_por_kg = 10.0;
            break;
        case 'O':
        case 'o':
            precio_por_kg = 15.0;
            break;
    }

    total = peso * precio_por_kg;

    if (peso > 50.0) {
        total = total * 0.8;
        printf("\nRequiere transporte especial.\n");
    } else if (peso > 20.0) {
        total = total * 0.9;
    }

    printf("El costo total del envío es: $%.2f\n", total);

    return 0;
}