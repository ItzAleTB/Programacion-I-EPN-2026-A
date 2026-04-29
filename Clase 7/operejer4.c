#include <stdio.h>

int main() {


    int x = 5, y = 10;
    int z = (x > y) ? (x / y) : (y % x == 0 ? y / x : x * y);

    printf("El valor de z es: %d\n", z);

    return 0;
}
