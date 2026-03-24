#include <stdio.h>

int main() {
    int hora;

    printf("Ingrese la hora en formato militar (0-23): ");
    scanf("%d", &hora);

    if (hora < 12) {
        printf("Buenos dias.\n");
    } else if (hora < 18) {
        printf("Buenas tardes.\n");
    } else {
        printf("Buenas noches.\n");
    }

    return 0;
}