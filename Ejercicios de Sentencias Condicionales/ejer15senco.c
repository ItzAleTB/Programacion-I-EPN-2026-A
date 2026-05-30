#include <stdio.h>

int main() {
    float ex1, ec1, su1, ex2, ec2, su2;
    float dif_ex, dif_ec, dif_su, ahorro;
    int asignados;

    do {
        printf("Gasolinera 1 - Precio Extra: ");
        asignados = scanf("%f", &ex1);
        while (getchar() != '\n');
        if (asignados != 1 || ex1 <= 0.0) printf("Error: Precio inválido.\n\n");
    } while (asignados != 1 || ex1 <= 0.0);

    do {
        printf("Gasolinera 1 - Precio Eco: ");
        asignados = scanf("%f", &ec1);
        while (getchar() != '\n');
        if (asignados != 1 || ec1 <= 0.0) printf("Error: Precio inválido.\n\n");
    } while (asignados != 1 || ec1 <= 0.0);

    do {
        printf("Gasolinera 1 - Precio Súper: ");
        asignados = scanf("%f", &su1);
        while (getchar() != '\n');
        if (asignados != 1 || su1 <= 0.0) printf("Error: Precio inválido.\n\n");
    } while (asignados != 1 || su1 <= 0.0);

    do {
        printf("Gasolinera 2 - Precio Extra: ");
        asignados = scanf("%f", &ex2);
        while (getchar() != '\n');
        if (asignados != 1 || ex2 <= 0.0) printf("Error: Precio inválido.\n\n");
    } while (asignados != 1 || ex2 <= 0.0);

    do {
        printf("Gasolinera 2 - Precio Eco: ");
        asignados = scanf("%f", &ec2);
        while (getchar() != '\n');
        if (asignados != 1 || ec2 <= 0.0) printf("Error: Precio inválido.\n\n");
    } while (asignados != 1 || ec2 <= 0.0);

    do {
        printf("Gasolinera 2 - Precio Súper: ");
        asignados = scanf("%f", &su2);
        while (getchar() != '\n');
        if (asignados != 1 || su2 <= 0.0) printf("Error: Precio inválido.\n\n");
    } while (asignados != 1 || su2 <= 0.0);

    printf("\n--- Comparativa ---\n");

    if (ex1 < ex2) {
        dif_ex = ex2 - ex1;
        printf("Combustible Extra es más barato en la Gasolinera 1 (Ahorro por galón: $%.2f)\n", dif_ex);
    } else {
        dif_ex = ex1 - ex2;
        printf("Combustible Extra es más barato en la Gasolinera 2 (Ahorro por galón: $%.2f)\n", dif_ex);
    }

    if (ec1 < ec2) {
        dif_ec = ec2 - ec1;
        printf("Combustible Eco es más barato en la Gasolinera 1 (Ahorro por galón: $%.2f)\n", dif_ec);
    } else {
        dif_ec = ec1 - ec2;
        printf("Combustible Eco es más barato en la Gasolinera 2 (Ahorro por galón: $%.2f)\n", dif_ec);
    }

    if (su1 < su2) {
        dif_su = su2 - su1;
        printf("Combustible Súper es más barato en la Gasolinera 1 (Ahorro por galón: $%.2f)\n", dif_su);
    } else {
        dif_su = su1 - su2;
        printf("Combustible Súper es más barato en la Gasolinera 2 (Ahorro por galón: $%.2f)\n", dif_su);
    }

    ahorro = (dif_ex * 10.0) + (dif_ec * 10.0) + (dif_su * 10.0);
    printf("\nAhorro total final combinando y llenando 10 galones de cada una: $%.2f\n", ahorro);

    return 0;
}