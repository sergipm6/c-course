#include <stdio.h>
#include <string.h>

typedef struct Alumno{
    char nombre[50];
    float nota;

}Alumno;

int main() {

    int numAlumnos = 4;

    Alumno clase[] = {
        {"Jose", 4.9},
        {"Maria", 9.3},
        {"Sergi", 10},
        {"Jorge", 3.5}
    };

    //Iterar con indice (con .)

    printf("---- Iteraciones con . ----\n");
    for(int i = 0; i <= numAlumnos; i++){
        printf("%s - Nota: %1.f\n", clase[i].nombre, clase[i].nota);
    }


    //Iterar con puntero 

    printf("---- Iteraciones con puntero ----\n");
    for(int i = 0; i < numAlumnos; i++){
        Alumno *ptr = &clase[i];
        printf("%s - Nota: %1.f\n", ptr ->nombre, ptr -> nota);
    }

    //Iterar directamente apuntando al array

    printf("---- Iterar apuntando al array ----");
    Alumno *p = clase;
    for (int i = 0; i < numAlumnos; i++){
        printf("%s - Nota %1.f\n", p->nombre, p->nota);
        p++;
    }

    //Ahora, ejercicio con busqueda y seteo en array

    Alumno *busqueda = clase;
    for (int i = 0; i < numAlumnos; i++){
        if(strcmp(busqueda->nombre, "Sergi") == 0) {
            busqueda->nota= 8.9;
            break;
        }
        busqueda++;
    }

    printf("--- Notas después del cambio --- \n");
    for(int i = 0; i < numAlumnos; i++){
        char estado[] = "suspendido";
        if (clase[i].nota >= 5.0){
            strcpy(estado, "aprobado");
            printf("%s - Ha %s con una nota de: %1.f puntos. \n", clase[i].nombre, estado, clase[i].nota);
        }else{
            printf("%s - Ha %s\n", clase[i].nombre, estado);
        }
    }
    

}