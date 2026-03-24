#include <stdio.h>

int main() {
    int codigoPuerta;

    printf("Ingrese un codigo de 4 digitos: ");
    scanf("%d", &codigoPuerta);

    if (codigoPuerta == 1234) {
        printf("Codigo correcto.\nLa puerta ahora esta abierta.\n");
    } else {
        printf("Codigo incorrecto.\nLa puerta permanece cerrada.\n");
    }

    return 0;
}