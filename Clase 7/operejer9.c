#include <stdio.h>

int main() {
    int x = 5, y = 5;

    int r = (++x < 5) || (y++ > 5);

    printf("r = %d\n", r);
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}