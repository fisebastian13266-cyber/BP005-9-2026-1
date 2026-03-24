#include <stdio.h>

int main() {
    int edad;
    int edadVotacion = 18;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad >= edadVotacion) {
        printf("Tiene edad suficiente para votar!\n");
    } else {
        printf("No tiene edad suficiente para votar!\n");
    }

    return 0;
}