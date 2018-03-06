#include <stdio.h>
#include <stdlib.h>

int main(){
    double buffer;
    double *vec= NULL;
    int dim = 0;
    char end;
    
    printf("Vector: ");
    do{
        vec = (double *) realloc(vec, (dim+1)* sizeof(double));
        scanf(" %lf", &buffer);
        vec[dim++] = buffer;
        }while (!scanf(" %[)]", &end));

    
    return EXIT_SUCCESS;

    }
