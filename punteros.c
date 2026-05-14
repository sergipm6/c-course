#include <stdio.h>

int main() {
    int edad = 25;
    int *ptr = &edad;


    printf("Valor de edad: %d\n", edad);
    printf("Dirección de edad: %p\n", &edad);
    printf("Valor del puntero: %p\n", ptr);
    printf("Valor al que apunta %d\n", *ptr);

    *ptr = 30;

    printf("Valor al que apunta %d\n", *ptr);


    return 0;
}