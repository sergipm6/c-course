#include <stdio.h>

void doblar(int *numero) {
    *numero = *numero * 2;
}

void sumar(int *a, int *b, int *resultado){
    *resultado = *a + *b;
}

int main() {
    int edad = 25;

    printf("La edad es: %d\n", edad);

    doblar(&edad);

    printf("La edad ahora es: %d\n", edad);

    int x = 20;
    int y = 30;
    int total = 0;

    sumar(&x,&y, &total);

    printf("La suma de los números es:  %d + %d  = %d\n", x, y, total);

    int valor = 244;
    int *ptr = &valor;
    int *ptrr = &valor;

    printf("Valor de valor = %d\n", valor);
    printf("Valor de &valor = %p\n", &valor);
    printf("Valor de *ptr = %d\n", *ptr);
    printf("Valor de ptr = %p\n", ptr);
    printf("Valor de &ptr = %p\n", &ptr);
    printf("Valor de *ptrr = %d\n", *ptrr);
    printf("Valor de ptrr = %p\n", ptrr);
    printf("Valor de &ptrr = %p\n", &ptrr);

    return 0;

}