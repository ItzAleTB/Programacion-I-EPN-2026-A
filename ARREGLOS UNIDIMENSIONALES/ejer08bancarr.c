// Ejercicio 8: Identificar el Máximo Escribir un programa que almacene 6 números. Utilizar un bucle para recorrer el arreglo y determinar cuál es el número de mayor valor. • Entrada: Valores: 14, 25, 8, 33, 12, 5 • Salida: El valor máximo es: 33
 
#include <stdio.h>
#include <windows.h>
 
int main() {
    SetConsoleOutputCP(65001);
    int arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<=n;i++){
        printf("Ingrese el valor para la posición [%d]: ",i);
        scanf("%d",&arr[i]);
    }
    int max =arr[0];
    for(int i = 1; i <= n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("\nEl valor máximo es: %d\n", max);
 
    return 0;
}