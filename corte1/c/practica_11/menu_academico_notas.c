#include <stdio.h>

int main() {
    int opcion;

    printf("Menu de opciones\n");
    printf("1. Saludar\n");
    printf("2. Mostrar mensaje\n");
    printf("3. Calcular promedio\n");
    printf("4. Salir\n");

    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Hola, estudiante de programacion en C.\n");
            break;

        case 2:
            printf("Hoy es un buen dia para practicar codigo.\n");
            break;

        case 3: {
            char nombre[30];
            float nota1, nota2, nota3, promedio;

            printf("Ingrese el nombre del estudiante: ");
            scanf("%s", nombre);

            printf("Ingrese la nota 1: ");
            scanf("%f", &nota1);

            printf("Ingrese la nota 2: ");
            scanf("%f", &nota2);

            printf("Ingrese la nota 3: ");
            scanf("%f", &nota3);

            if ((nota1 < 0 || nota1 > 5) ||
                (nota2 < 0 || nota2 > 5) ||
                (nota3 < 0 || nota3 > 5)) {

                printf("Una o mas notas son invalidas.\n");

            } else {
                promedio = (nota1 + nota2 + nota3) / 3;

                printf("\nEstudiante: %s\n", nombre);
                printf("Promedio: %.2f\n", promedio);

                if (promedio < 3.0) {
                    printf("Resultado: Reprobado.\n");
                } else if (promedio < 4.0) {
                    printf("Resultado: Aprobado con desempeno aceptable.\n");
                } else if (promedio < 4.5) {
                    printf("Resultado: Buen desempeno.\n");
                } else {
                    printf("Resultado: Excelente desempeno.\n");
                }
            }
            break;
        }

        case 4:
            printf("Fin del programa.\n");
            break;

        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}