#include <stdio.h>
#include <stdbool.h>

int main() {

    int codigo, edad;
    float nota1, nota2, nota3, promedio;
    double matriculaValor;
    char nombre[50];
    char inicialApellido;

    bool matriculaActiva, documento, induccion, monitor;

    int temp;

    printf("=== SISTEMA ACADEMICO ===\n");

    printf("Ingrese codigo: ");
    scanf("%d", &codigo);

    getchar();

    printf("Ingrese nombre completo: ");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Ingrese inicial del apellido: ");
    scanf(" %c", &inicialApellido);

    printf("Ingrese edad: ");
    scanf("%d", &edad);

    if(edad <= 0){
        printf("Edad invalida\n");
        return 0;
    }

    printf("Ingrese nota 1: ");
    scanf("%f", &nota1);

    printf("Ingrese nota 2: ");
    scanf("%f", &nota2);

    printf("Ingrese nota 3: ");
    scanf("%f", &nota3);

    printf("Ingrese valor de matricula: ");
    scanf("%lf", &matriculaValor);

    printf("=== Ingreso al laboratorio ===\n");

    printf("Tiene matricula activa? (1=si, 0=no): ");
    scanf("%d", &temp);
    matriculaActiva = temp;

    printf("Presenta documento? (1=si, 0=no): ");
    scanf("%d", &temp);
    documento = temp;

    printf("Aprobo induccion? (1=si, 0=no): ");
    scanf("%d", &temp);
    induccion = temp;

    printf("Es monitor? (1=si, 0=no): ");
    scanf("%d", &temp);
    monitor = temp;

    if(nota1 < 0 || nota1 > 5 || nota2 < 0 || nota2 > 5 || nota3 < 0 || nota3 > 5){
        printf("Error: Notas invalidas\n");
        return 0;
    }

    promedio = (nota1 + nota2 + nota3) / 3;

    printf("\n  El codigo es: \n ");

    if(codigo % 2 == 0)
        printf("PAR\n");
    else
        printf("IMPAR\n");

    printf("\n === Desempeño academico ===\n");

    if(promedio < 3.0)
        printf("Reprobado\n");
    else if(promedio < 4.0)
        printf("Aprobado (aceptable)\n");
    else if(promedio < 4.5)
        printf("Buen desempeño\n");
    else
        printf("Excelente desempeño\n");

        printf("\n INGRESO \n");

    if((matriculaActiva && documento && induccion) || monitor)
        printf("Puede ingresar al laboratorio\n");
    else
        printf("No puede ingresar al laboratorio\n");

    printf("\n ESTADO \n");

    if(promedio >= 3){
        if(edad >= 18)
           printf("\n mayor de edad\n")
        else
            printf("\n  menor de edad\n");
    }

    bool estado = (promedio >= 3);

    printf("\n=== RESUMEN ===\n");
    printf("Nombre: %s", nombre);
    printf("Inicial apellido: %c\n", inicialApellido);
    printf("Edad: %d\n", edad);
    printf("Promedio: %.2f\n", promedio);
    printf("Matricula: $%.2lf\n", matriculaValor);
    printf("Estado: %s\n", (promedio >= 3) ? "Aprobado" : "Reprobado");
    printf("Ingreso al laboratorio: %s\n", puedeIngresar ? "Permitido" : "No permitido");

    return 0;
}
