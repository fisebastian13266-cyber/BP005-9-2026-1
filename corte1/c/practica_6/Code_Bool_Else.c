#include <stdio.h>
#include <stdbool.h>

int main() {
    int hora;

    printf("Ingrese la hora en formato militar (0-23): ");
    scanf("%d", &hora);

    if (hora < 0 || hora > 23) {
        printf("Hora invalida.\n");
    } else {
        bool esManana = hora < 12;
        bool esTarde = hora < 18;

        if (esManana) {
            printf("Buenos dias.\n");
        } else if (esTarde) {
            printf("Buenas tardes.\n");
        } else {
            printf("Buenas noches.\n");
        }
    }

    return 0;
}