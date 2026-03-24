#include <stdio.h>

int main() {
    int hora;

    printf("Ingrese la hora en formato militar (0-23): ");
    scanf("%d", &hora);

    if (hora < 18) {
        printf("Buen dia.\n");
    } else {
        printf("Buenas noches.\n");
    }

    return 0;
}