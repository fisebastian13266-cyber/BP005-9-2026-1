#include <stdio.h>

int main() {
    int numero1, numero2, suma;

    // Solicitar números al usuario
    printf("Ingrese el primer número entero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número entero: ");
    scanf("%d", &numero2);

    // Calcular la suma
    suma = numero1 + numero2;

    // Mostrar el resultado
    printf("La suma de %d y %d es: %d\n", numero1, numero2, suma);

    return 0;
}

