#include <stdio.h>
int main(){
    printf("Hola Mundo");
    int x=10;
    int *puntero;
    puntero=&x;
    printf("\nContenido del puntero: %d", *puntero);
    printf("\nDireccion de la vriable : %d", &x);
    printf("\nDireccion de el puntero : %d", &puntero);
    int memoria= sizeof(x);
    printf("\nTamaño de memoria utilizado por esa variable: %d", memoria);
}