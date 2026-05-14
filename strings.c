#include <stdio.h>

int main() {
     char nombre[] = "Hola";

     printf("String:  %s\n", nombre);
     printf("Letra 0: %c\n", nombre[0]);
     printf("Letra 1: %c\n", nombre[1]);
     printf("Letra 2: %c\n", nombre[2]);
     printf("Letra 3: %c\n", nombre[3]);
     printf("Letra 4 (el secreto): %d\n", nombre[4]);

     return 0;
}