#include <stdio.h>

int suma(int x1, int x2) {
    int resultado;
    resultado = x1 + x2;
    return resultado;
}

int resta(int x1, int x2) {
    int resultado;
    resultado = x1 - x2;
    return resultado;
}

int multiplicacion(int x1, int x2) {
    int resultado;
    resultado = x1 * x2;
    return resultado;
}

int main() {
    int a, b, r;

    a = 3;
    b = 5;

    r = suma(a, b);

    printf("El resultado de la suma es: %d\n", r);
    printf("El resultado de la resta es: %d\n", resta(a, b));
    printf("El resultado de la multiplicacion es: %d\n", multiplicacion(a, b));

    return 0;
}