#include <stdio.h>

int main() {
    int hora;

    printf("Ingrese la hora en formato militar (0-23): ");
    scanf("%d", &hora);

    (hora < 18) ? printf("Buen dia.\n") : printf("Buenas noches.\n");

    return 0;
}