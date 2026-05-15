/*Ejercicio — Biblioteca de libros
Crea un programa en C que gestione una colección de libros usando structs. Cada libro tiene título, autor, año de publicación, y si está disponible o prestado.
El programa debe permitir:

Agregar un libro a la colección
Mostrar todos los libros
Prestar un libro (marcarlo como no disponible)
Devolver un libro
Buscar libros por autor
Salir

Requisitos técnicos concretos:

Define la struct Libro con typedef
Usa un array estático de máximo 50 libros
Las funciones reciben el array por puntero
Para el campo disponible usa int (1 = disponible, 0 = prestado)*/
#include <stdio.h>
#include <string.h>

typedef struct Libro
{
    char titulo[50];
    char autor[50];
    int añoPublicacion;
    int estado;
    
}Libro;


//Agregar un libro a la colección
int agregarLibro(Libro *l, int cantidad, char *titulo, char *autor, int añoPublicacion){   
    if (cantidad >= 50){
        printf("La biblioteca está llena.\n");
        return cantidad;
    }
       
    strcpy(l[cantidad].titulo, titulo);
    strcpy(l[cantidad].autor, autor);
    l[cantidad].añoPublicacion = añoPublicacion;
    l[cantidad].estado = 1;
    
    return cantidad + 1;
}

//Mostrar todos los libros
void mostrarLibros(Libro *l, int cantidad){
   for(int i = 0; i < cantidad; i++){
    printf("---------------------------------\n");
    printf("Título: %s\n", l[i].titulo);
    printf("Autor: %s\n", l[i].autor);
    printf("Año de publicación: %d\n", l[i].añoPublicacion);
    printf("Estado: %s\n", l[i].estado == 1 ? "Disponible" : "Prestado");
    printf("---------------------------------\n");
}
}

//Prestar un libro
void prestarLibro(Libro *l, char *titulo, int cantidad){

}

//Devolver libro
void devolverLibro(Libro *l, char *titulo, int cantidad){}

//Buscar libros por autor
void filtrarPorAutor(Libro *l, char *titulo,char *autor){}



int main(){
    Libro libros[50];
    int cantidad = 0;
    int respuesta;

    //----ENTRAMOS AL PROGRAMA-----
    printf("---- BIBLIOTECA DIGITAL -----\n");
    do
    {
        printf("1. Agregar libro: \n");
        printf("2. Mostrar libros: \n");
        printf("3. Prestar libro: \n");
        printf("4. Devolver libro: \n");
        printf("5. Filtrar por autor: \n");
        printf("6. Salir: \n");
        printf("-------------------------------";)
        scanf("%d", &respuesta);

        switch (respuesta)
        {
        case 1:{
            Libro nuevo;
            printf("¿De que libro se trata?\n");
            scanf(" %[^\n]",&nuevo.titulo);
            printf("¿Quién escribió ese libro?\n");
            scanf(" %[^\n]",&nuevo.autor);
            printf("¿En que año fue publicado ese libro?\n");
            scanf("%d",&nuevo.añoPublicacion);
            nuevo.estado = 1;
            cantidad = agregarLibro(libros, cantidad, nuevo.titulo, nuevo.autor, nuevo.titulo);
            break;
        }
        case 2:
            mostrarLibros(libros ,cantidad);
            break;
        case 3:{    
            char decision[50];
            printf("¿Que libro deseas llevarte?\n");
            scanf(" %[^\n]", decision);
            for(int i = 0; i < cantidad;i++){
                if(strcmp(libros[i].titulo, decision) == 0){
                    if (libros[i].estado == 1)
                    {
                        printf("El libro está dispoible. LLevatelo!\n");
                        libros[i].estado = 0;
                    }else{
                        printf("El libro ya está prestado\n"); 
                }
            }
            }
            break;
        }
        case 4:{
            char decisionDevolver[50];
            printf("¿Que libro deseas devolver?\n");
            scanf(" %[^\n]", decisionDevolver);
            int encontradoDev = 0;
            for(int i = 0; i < cantidad; i++){
                if(strcmp(libros[i].titulo, decisionDevolver) == 0){
                    if (libros[i].estado == 0){
                        printf("Perfecto! Libro devuelto.\n");
                        libros[i].estado = 1;
                        encontradoDev = 1;
                    } else {
                        printf("El libro no está prestado.\n");
                        encontradoDev = 1;
                    }
                }
            }
            if(!encontradoDev) printf("Libro no encontrado.\n");
            break;
        }
        case 5:{
        char busqueda[50];
        printf("¿Que autor estás buscando?\n");
        scanf(" %[^\n]", busqueda);
        int encontradoAutor = 0;
        for (int i = 0; i < cantidad; i++){
            if(strcmp(libros[i].autor, busqueda) == 0){
                printf("Tenemos este título: %s de ese autor: %s\n", libros[i].titulo, libros[i].autor);
                encontradoAutor = 1;
            }
        }
        if(!encontradoAutor) printf("No tenemos libros de ese autor, lo sentimos!\n");
            break;  
    }  
        case 6:
            break;
        }

    } while (respuesta != 6);
    

}