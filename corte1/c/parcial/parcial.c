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

    char tempInicial[10];
      printf("Ingrese inicial del apellido: ");
      scanf("%s", tempInicial);
      inicialApellido = tempInicial[0];
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

    if(nota1 < 0 || nota1 > 5 || nota2 < 0 || nota2 > 5 || nota3 < 0 || nota3 > 5){
        printf("Error: Notas invalidas\n");
        return 0;
    }

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

    promedio = (nota1 + nota2 + nota3) / 3;

    printf("\nEl codigo es: ");

    if(codigo % 2 == 0)
        printf("PAR\n");
    else
        printf("IMPAR\n");

    printf("\n=== Desempeño academico ===\n");

    if(promedio < 3.0)
        printf("Reprobado\n");
    else if(promedio < 4.0)
        printf("Aprobado (aceptable)\n");
    else if(promedio < 4.5)
        printf("Buen desempeño\n");
    else
        printf("Excelente desempeño\n");

    bool puedeIngresar = (matriculaActiva && documento && induccion) || monitor;

    printf("\n=== INGRESO ===\n");

    if(puedeIngresar)
        printf("Puede ingresar al laboratorio\n");
    else
        printf("No puede ingresar al laboratorio\n");

    printf("\n=== ESTADO ===\n");

    if(promedio >= 3){
        if(edad >= 18)
            printf("Aprobado y mayor de edad\n");
        else
            printf("Aprobado pero menor de edad\n");
    }

    printf("\n=== RESUMEN ===\n");
    printf("Codigo: %d (%s)\n", codigo, (codigo % 2 == 0) ? "Par" : "Impar");
    printf("Nombre: %s", nombre);
    printf("Inicial apellido: %c\n", inicialApellido);
    printf("Edad: %d\n", edad);
    printf("Promedio: %.2f\n", promedio);
    printf("Matricula: $%.2lf\n", matriculaValor);
    printf("Estado final: %s\n", (promedio >= 3) ? "Aprobado" : "Reprobado");
    printf("Acceso al laboratorio: %s\n", puedeIngresar ? "Autorizado" : "Denegado");
    printf("Mayor de edad: %s\n", (edad >= 18) ? "Si" : "No");

    return 0;
}
