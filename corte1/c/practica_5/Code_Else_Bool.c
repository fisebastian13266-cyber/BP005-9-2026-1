#include <stdio.h>
#include <stdbool.h>

int main() {
    int hora;

    printf("Ingrese la hora en formato militar : ");
    scanf("%d", &hora);

    bool esDia = hora < 18;

    if (esDia) {
        printf("Buen dia.\n");
    } else {
        printf("Buenas noches.\n");
    }

    return 0;
}