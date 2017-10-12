#include<stdio.h>
 
int main(){
    int numero = 10;
    int *ptrNumero = &numero;

    int segundoNumero = 20;
    int *ptrSegundoNumero = &numero;

    /* 
    *el especificador de conversion %p  despliega la ubicacion de memoria como un entero hexadecimal
    !Desreferenciar un apuntador que no se inicializó de manera apropiada, o que no se le indicó que apunte hacia unadirección específica en memoria es un error
    *
    */
    printf("la direccion de numero es %p"
        "\nel valor de ptrNumero es : %p", &numero, ptrNumero);

    printf( "\n\nEl valor de segundoNumero es %d"
            "\nEl valor de *ptrSegundoNumero es %d", segundoNumero, *ptrSegundoNumero );
            
    printf( "\n\nMuestra de que * y & son complementos "
             "uno del otro\n&*ptrSegundoNumero = %p"
             "\n*&ptrSegundoNumero = %p\n", &*ptrSegundoNumero, *&ptrSegundoNumero );
}


    