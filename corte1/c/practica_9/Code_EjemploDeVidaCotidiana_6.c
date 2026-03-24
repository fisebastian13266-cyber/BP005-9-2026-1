#include <stdio.h>
#include <stdbool.h>

int main() {
    bool estaConectado;
    bool esAdmin;
    int nivelSeguridad;

    int entradaLogin, entradaAdmin;

    printf("¿Esta conectado? (1 = si, 0 = no): ");
    scanf("%d", &entradaLogin);
    estaConectado = (entradaLogin == 1);

    printf("¿Es administrador? (1 = si, 0 = no): ");
    scanf("%d", &entradaAdmin);
    esAdmin = (entradaAdmin == 1);

    printf("Ingrese su nivel de seguridad (1 = mas alto, 4 = mas bajo): ");
    scanf("%d", &nivelSeguridad);

    if (estaConectado && (esAdmin || nivelSeguridad <= 2)) {
        printf("Acceso concedido\n");
    } else {
        printf("Acceso denegado\n");
    }

    return 0;
}