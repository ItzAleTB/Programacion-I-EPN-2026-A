#include <stdio.h>
 
int main() {
int n;
printf("Ingrese el numero de filas del triangulo: ");
scanf("%d", &n);
for (int i=0;i<n;i++){
 
     for (int esp=0;esp<n - i -1;esp++){
         printf("  ");
     }
     int val =1; 
     for (int j=0;j<=i;j++){
         if (val %2 !=0){
             printf("%2d  ",val);
             val= val * (i-j )/(j+1);
         }else {
             printf("*   ");
         val= val * (i-j )/(j+1);
         }
     }
     printf("\n");
}
 
    return 0;
}