#include <stdio.h>
int main(){
    printf("Hola Mundo");
    int x=10;
    int *puntero;
    puntero=&x;
    printf("Contenido del puntero: %d", *puntero);
    printf("Direccion de la vriable : %d", &x);
    printf("Direccion de el puntero : %d", &puntero);
    int memoria= sizeof(x);
    printf("Tamaño de memoria utilizado por esa variable: %d", memoria);
}