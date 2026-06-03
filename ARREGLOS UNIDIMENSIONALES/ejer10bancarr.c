// Ejercicio 10: Suma de Valores Mayores a 10 Escribir un programa que guarde 8 números enteros en un arreglo. Recorrer el arreglo y 
// sumar únicamente los elementos que sean estrictamente mayores a 10. Mostrar el total. 
// • Entrada: Valores: [5, 12, 8, 20, 3, 15, 9, 2]
// • Salida: Suma de los mayores a 10: 47 

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int arr[7];
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum=0,finmay=0;
    
    for (int i=0;i<=n;i++){
        printf("Ingrese el valor para la posicion [%d]: ", i);
        scanf("%d",&arr[i]);
    }
    
    for (int i=0;i<=n;i++){
        if(arr[i]>10){
            sum += arr[i];
            finmay++;
        }
    }
    if (finmay > 0){
        printf("Suma de los mayores a 10 = %d\n", sum);
    }else {
        printf("Ningun valor es superior a 10 por lo que no se realizo ninguna suma.");
    }
    return 0;
}