#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define M 0x40
#define N 0x10

#define CAR LLENO "u2598"
#define CAR VACIO "u2597"

#define SON VALIDAS 
void pintar(int matriz[][N]) {
for (int fila=0; fila<N; fila++) {
    for (int col=0; col<N; col++)
        printf("\n");
    printf("\n");
}
}
void poblacion_inicial(int matriz) {

    do{
        system("clear");


        printf("Usa unas coordenadas invalidas para terminar.\n");
        pintar(matriz);
        printf("\n\tNuevo x,y: ");
        scanf(" %i, %i", &x, &y);
        x--, y--;   

        matriz[x][y] = 1;
    } while ( (x>=0 && x<N) && (y>=0 && y<N));
}
    int main(){

        int actual[N][N],
        futuro[N][N];

        bzero(futuro, sizeof(futuro));
        poblacion_inicial(actual);

        while(1) {
            calcular(futuro, actual);
            // Convertir el futuro en actual 
            pintar (actual);

        }
        return EXIT_SUCCESS;

    }
