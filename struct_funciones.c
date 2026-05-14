    #include <stdio.h>
    #include <string.h>

    typedef struct Producto{
        char nombre[50];
        float precio;
        int stock;
    }Producto;

        void imprimirPorValor(Producto p){
        printf("Producto recibido por valor: %s - %2.f\n", p.nombre, p.precio);
        p.precio = 0;
    }

    void imprimirPorPuntero(Producto *p){

        printf("Producto recibido por puntero: %s - %2.f\n", p->nombre, p->precio);

        //Esto si que afectaria al original, por ejemplo si
        // p->precio = p-> precio *1.10 // Subiría su valor un 10%
    }

    int main() {
        Producto producto = {"Portátil", 50.50, 300};

        printf("--- Pasar struct por valor (copia) --- \n\n");
        printf("Precio original: %2.f\n", producto.precio);

        //Esta función recibe una copia así no modifca al original

        Producto copia = producto;
        copia.precio = 500.00;

        printf("Precio actual: %2.f\n", copia.precio);


        //---------------------------------------------------------
        //Pasar struct por puntero (referencia)

        Producto *ptr = &producto;
        printf("---- Pasar struct por puntero ----\n");
        printf("Precio original: %2.f\n", ptr->precio);

        ptr->precio = 200.00;
        printf("Precio modificado: %2.f\n", ptr->precio);

        //----------------------------------------------------------
        //Pasar struct directamente a funcion

        Producto computer = {"Sobremesa", 999.99, 49};
        Producto tablet = {"Tablet", 200.00, 100};

        //Pasar valor por copia

        Producto computerCopia = computer;
        imprimirPorValor(computerCopia);
        printf("Precio original del computer después de la función: %.2f\n", computer.precio);

        //Pasar por puntero (modifico el original)
        imprimirPorPuntero(&computer);
        printf("Precio del computer después de imprimir por puntero: %.2f\n", computer.precio);

        return 0;

    }

