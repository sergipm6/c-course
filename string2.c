#include <stdio.h>
#include <string.h>

int main() {
     char nombre[] = "Hola";

    printf("La longitud del nombre es: %lu\n", strlen(nombre));

    int i = 1;
    while( nombre[i] != '\0'){
        printf("Valor en: %c\n", nombre[i]);
        i++;
    }

    return 0;
}