#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre[16];
    char hexadecimal[16];
    int num;

    printf("Entero: ");
    scanf(" %i", &num);
    scanf(" %s", nombre);
    printf("[%i] => %s.\n", num, nombre);

    printf(" Hexadecimal: ");
    scanf(" %[0-9a-fA-F]", hexadecimal);
    printf("0x%sh\n", hexadecimal);


    /* Conjunto de selección inverso */
    scanf(" %[^a-f]",  hexadecimal);

    scanf(" %[^\n] ", nombre);
    gets();

 
    return EXIT_SUCCESS;
}
