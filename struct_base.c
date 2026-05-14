#include <stdio.h>
#include <string.h>

typedef struct struct_base
{

    int edad;
    char nombre[50];
    char ciudad[50];
    float estatura;
}Persona;

int main() {

    Persona sergi;

    strcpy(sergi.nombre, "Sergi Parreño");
    strcpy(sergi.ciudad, "Burrriana");
    sergi.edad = 26;
    sergi.estatura = 1.78;

    printf("Nombre: %s\n", sergi.nombre);
    printf("Ciudad:  %s\n", sergi.ciudad);
    printf("Edad: %d\n" , sergi.edad);
    printf("Estatura: %f\n" , sergi.estatura);

    //----- CREAR PERSONA DIRECTAMENTE -----
    Persona persona2 = {28, "Maria Lopez", "Castellón", 1.56};

    printf("Nombre y ciudad %s %s\n", persona2.nombre, persona2.ciudad);
    printf("Edad y estatura: %d %f\n", persona2.edad, persona2.estatura);

    persona2.edad = 31;

    printf("Maria ahora tiene: %d\n", persona2.edad);

    //--- MEMORIA ---
    printf("---- TAMAÑO EN MEMORIA ----\n");
    printf("sizeof(Persona) = %lu bytes\n", sizeof(Persona));
    printf("sizeof(char) = %lu bytes\n", sizeof(char));
    
    return 1;
}
