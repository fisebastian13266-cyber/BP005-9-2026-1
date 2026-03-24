#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El valor es un numero positivo.\n");
    } else if (numero < 0) {
        printf("El valor es un numero negativo.\n");
    } else {
        printf("El valor es 0.\n");
    }

    return 0;
}
