// Ejercicio 6: Búsqueda de un Elemento X Desarrollar un programa que guarde 5 números en un arreglo. Pedir al usuario un número X. Buscar el número en el arreglo; si existe, imprimir su posición (índice), de lo contrario imprimir "No encontrado". • Entrada: Arreglo: [12, 7, 4, 19, 2] -> X = 19 • Salida: Elemento encontrado en el índice: 3
 
#include <stdio.h>
#include <windows.h>
 
int main(void) {
    SetConsoleOutputCP(65001);
    int arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);
    int find,pos;
 
    for(int i = 0; i < n; i++) {
        printf("Ingrese el valor para la posición [%d]: ", i);
        scanf("%d", &arr[i]);
    }
 
    printf("\nIngrese el número X a buscar: ");
    scanf("%d", &find);
 
    for(int i = 0; i < n; i++) {
        if(arr[i] == find) {
            pos = i;
            break;               
        }
    }
 
    if(pos != -1) {
        printf("Elemento encontrado en el índice: %d\n", pos);
    } else {
        printf("El valor no ha sido encontrado\n");
    }
 
    return 0;
}