#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 20;
    int y = 18;

    bool esMayor = x > y;

    if (esMayor) {
        printf("x es mayor que y\n");
    }

    return 0;
}