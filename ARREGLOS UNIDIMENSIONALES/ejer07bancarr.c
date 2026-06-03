// Ejercicio 7: Reemplazo de Negativos Codificar un programa que reciba 6 números en un arreglo. Recorrer el vector y reemplazar todos los números negativos por un 0. Mostrar el arreglo modificado. • Entrada: Arreglo original: [4, -1, 5, -8, -3, 2] • Salida: Arreglo modificado: 4, 0, 5, 0, 0, 2
 
 
#include <stdio.h>
#include <windows.h>
 
int main() {
    SetConsoleOutputCP(65001);
    int arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<=n;i++){
        printf("Ingrese el valor para la posición [%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i <= n; i++) {
        if(arr[i] < 0) {
            arr[i] = 0;
        }
    }
    printf("\nArreglo final: ");
 
    for (int i=0;i<=n;i++){
        printf("%d", arr[i]);
        if (i<n){
            printf(", ");
        } else {
            printf(".");
    }
}
 
    return 0;
}