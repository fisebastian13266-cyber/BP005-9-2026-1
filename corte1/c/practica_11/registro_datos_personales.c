#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nombre[50];
    char mes[20];
    char dia_str[10];
    char anio_str[10];
    int dia, anio;
    char inicial;
    char inicial_str[5];

    printf("Ingrese su nombre completo: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = 0;

    printf("Ingrese su mes de nacimiento: ");
    fgets(mes, sizeof(mes), stdin);
    mes[strcspn(mes, "\n")] = 0;

    printf("Ingrese el dia de nacimiento: ");
    fgets(dia_str, sizeof(dia_str), stdin);
    dia = atoi(dia_str);

    printf("Ingrese el anio de nacimiento: ");
    fgets(anio_str, sizeof(anio_str), stdin);
    anio = atoi(anio_str);

    printf("Ingrese la inicial de su apellido: ");
    fgets(inicial_str, sizeof(inicial_str), stdin);
    inicial = inicial_str[0];

    printf("\nResumen de datos ingresados:\n");
    printf("Nombre completo: %s\n", nombre);
    printf("Fecha de nacimiento: %d de %s de %d\n", dia, mes, anio);
    printf("Inicial del apellido: %c\n", inicial);

    return 0;
}