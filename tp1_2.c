#include <stdio.h>
#include <math.h>
int cuadrado (int numero);
void cuadradoDos(int *puntero);
void invertir(int *a,int *b);
void orden(int *c,int *d);
void imprimir();
int main(){
    int x=10;
    int numeroCuadrado= cuadrado(x);
    printf("\nNumero al cuadrado: %d", numeroCuadrado);
    cuadradoDos(&x);
    printf("\nNumero al cuadrado con funcion void: %d", x);
    int numeroRecibir;
    printf("\nDame un numero a recibir: ");
    scanf("%d",&numeroRecibir);
    printf("\nContenido de la variable :%d", numeroRecibir);
    printf("\nDireccion de la variable :%d", &numeroRecibir);
    int a=0;
    int b=3;
    printf("\nvalor de a: %d", a);
    printf("\nvalor de b: %d", b);

    invertir(&a,&b);
    printf("\nInvirtiendo los valores: ");
    printf("\nvalor de a: %d", a);
    printf("\nvalor de b: %d", b);
    int c,d;
    printf("\nOrdenando valores: ");
    printf("\nValor de c: ");
    scanf("%d",&c);
    printf("\nValor de d: ");
    scanf("%d",&d);
    orden(&c,&d);
    printf("\nNumero mas grande: %d",d);
    printf("\nValor mas chico: %d", c);
    imprimir();
    return 0;
}
int cuadrado (int numero){
    return(numero*numero);
}
void cuadradoDos(int *puntero){
    *puntero= (*puntero)*(*puntero);
}
void invertir(int *a,int *b){
    int ola=*b;
    *b=*a;
    *a=ola;
}
void orden(int *c,int *d){
    //el c tiene que tener el mas chico y d el mas grande
    int ola=*d;
    if (*c>*d)
    {
        *d=*c;
        *c=ola;
    }
}
void imprimir(){
    int a , b;
    printf("\nDame un valor ");
    scanf("%d",&a);
    printf("\nDame otro valor ");
    scanf("%d",&b);
    invertir(&a,&b);
    printf("\nValores invertidos: a: %d y b: %d", a,b);
    orden(&a,&b);
    printf("\nOrden, de mayor a menor: b= %d y a=%d",b,a);
}