#include <stdio.h>

int main() {

    int numero = 79;
    int *pnt = &numero;

    printf("Valor de numero: %d\n", numero);

    printf("Valor de puntero: %d\n", *pnt);
    
    printf("Lugar de memoria: %p\n", &pnt);

    printf("Que apunta puntero: %p\n", pnt);

    return 0;
}