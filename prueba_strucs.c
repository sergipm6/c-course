#include <stdio.h>
#include <string.h>

 typedef struct Persona
{
    int edad;
    char nombre[50];
    char apellido[50];
}Persona;

int main() {
    Persona personas[3] = {
        {26, "Sergi", "Parreño"},
        {29, "Jose", "Herrera"},
        {30, "Blas", "Pep"}
    };

    int longitud = sizeof(personas) / sizeof(personas[0]);

    for (int i = 0; i < longitud; i++)
    {
        printf("EDAD: %d , NOMBRE: %s , APELLIDO:  %s\n", personas[i].edad, personas[i].nombre, personas[i].apellido);
    }
    


    return 0;
}