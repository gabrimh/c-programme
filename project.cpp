#include <stdio.h>
#include <stdlib.h>

#define D 3
#define X 0
#define Y 1
#define Z 2

int main(){

    double vertice[3] = { 8., -6., 4. };


    /* Entrada de datos */
    printf ("(x, y, z,): ");
    scanf(" ( %lf , %lf , &lf ) ", &vertice[X], &vertice[Y], &vertice[Z]);

    /* Salida de datos */
    printf(" %.2lf\n, %.2lf, %.2lf, => \t", vertice[0], vertice [1], vertice [2]);
    printf(" %.2lf\n, %.2lf\n", vertice[0] / vertice[2], vertice [1] / vertice[2]);


   return EXIT_SUCCESS;

}

