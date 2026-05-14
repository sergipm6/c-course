#include <stdio.h>
#include <stdio.h>

typedef struct Empleado{

    char nombre[50];
    float salario;
    int antiguedad;
}Empleado;

int main(){
    Empleado emp = {"Jose", 1200.00, 10};

    printf("--- Accedemos con punto ----\n");
    printf("Nombre: %s\n", emp.nombre);
    printf("Salario: %.2f\n", emp.salario);
    printf("Antigüedad: %d\n", emp.antiguedad);

    //Ahora probamos a acceder a informacion con puntero

    Empleado *ptr = &emp;

    printf("--- Accedemos con puntero ---\n");
    printf("Nombre: %s\n", ptr -> nombre);
    printf("Salario: %.2f\n", ptr -> salario);
    printf("Antigüedad: %d\n", ptr -> antiguedad);

    //Ahora modificamos sobre puntero

    ptr -> salario = 2500.00;

    printf("--- MODIFICACIÓN SOBRE PUNTERO ---\n");
    printf("Salario: %.2f\n", ptr -> salario);
    printf("Donde apunta puntero: %p\n", ptr);
    printf("Celda de puntero: %p\n", &ptr);


    return 1;

}