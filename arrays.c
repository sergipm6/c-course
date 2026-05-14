#include <stdio.h>

int main(){
    int numeros[] = {1,2,3,4,5,6,7,8,9,10};

    printf("El elemento 0 es: %d\n", numeros[0]);
    printf("El elemento 3 es: %d\n", numeros[3]);

    printf("Dirección del array: %p\n", numeros);
    printf("Dirección del elemento 0: %p\n", &numeros[0]);

    return 0;

}