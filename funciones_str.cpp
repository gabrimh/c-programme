#include <stdio.h>
#include <stdlib.h>

#define N 0x100

int main(){

        const char *p = "The world is "; // Constante tipo cadena
        /* Pequeña lección  sobre punteros 
        char const *p = // Puntero de una constante. Forma coherente de decir que el char en const
        char * const p; // Puntero constante (fijo)
        char const * const p; // Puntero fijo a una constante 


*/        
       // Puntero: Es una variable que contiene una direccióm de memoria.
      
        char frase[N] = "a vampire.\n"; // Inicicalización
        char *d = frase;

        d = &frase[2];

        frase[2] == 'v'; // Notación de matrices
        *d == 'v';       // Notación de punteros
        *(d+2) == 'm';   // El está en aritmética de punteros 
        *d + 2 == 'x';

        printf(" d ocupa %lu bytes.\n" , sizeof(d));
        return EXIT_SUCCESS;
}
