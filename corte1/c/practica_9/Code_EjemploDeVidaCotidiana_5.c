#include <stdio.h>

int main() {
    int temperatura;

    printf("Ingrese un valor de temperatura: ");
    scanf("%d", &temperatura);

    if (temperatura < 0) {
        printf("¡Esta congelando!\n");
    } else if (temperatura < 20) {
        printf("Esta fresco.\n");
    } else {
        printf("Esta caluroso.\n");
    }

    return 0;
}