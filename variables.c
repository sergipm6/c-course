#include <stdio.h>
int main() {
    int num = 5;
    char letra = 'S';
    double coma = 5.5;
    char nombre[] = "Sergi es mi nombre";

    printf("El número es:  %d\n", num);
    printf("Mi nombre es: %s\n", nombre);
    printf("El decimal es: %.2f\n", coma);
    printf("La letra es: %c\n", letra);
    
    return 1;
}