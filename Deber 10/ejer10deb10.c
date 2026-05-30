#include <stdio.h>

int main() {
    int pin_correcto;
    int pin_ingresado;
    int asignados;
    int intentos = 0;
    int acceso_concedido = 0;

    do {
        printf("Fase de Configuración: Registre su nuevo PIN numérico: ");
        asignados = scanf("%d", &pin_correcto);
        while (getchar() != '\n');
        if (asignados != 1) {
            printf("Error: Entrada no válida. Ingrese solo números.\n\n");
        }
    } while (asignados != 1);

    printf("\n¡PIN guardado con éxito! Iniciando sistema de seguridad...\n\n");

    while (intentos < 3) {
        do {
            printf("Ingrese su PIN para iniciar sesión (Intento %d/3): ", intentos + 1);
            asignados = scanf("%d", &pin_ingresado);
            while (getchar() != '\n');
            if (asignados != 1) {
                printf("Error: Entrada no válida.\n\n");
            }
        } while (asignados != 1);

        if (pin_ingresado == pin_correcto) {
            acceso_concedido = 1;
            break;
        } else {
            printf("PIN incorrecto.\n\n");
            intentos++;
        }
    }

    if (acceso_concedido == 1) {
        printf("¡Acceso concedido! Bienvenido al sistema.\n");
    
    } else {
        printf("Acceso bloqueado. Ha superado los 3 intentos.\n");
        
    }

    return 0;
}