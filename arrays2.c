#include <stdio.h>

int main(){
    int array[] = {1,2,3,4,5,6};
    int longitud = 6;

    for(int i = 0; i < longitud; i++){
        printf("%d\n", array[i]);
    }

    //con puntero

    printf("---- CON PUNTERO ---- \n");
    int *ptr = array;
    for (int i = 0; i < longitud; i++)
    {
        printf("valor: %d\n", *ptr);
        ptr++;
    }

    return 0;
    
}