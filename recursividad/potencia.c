#include <stdio.h>

int potencia(int base, int exponente);

int main() {
    int numero = 10, 
       potencia = 2 
       resultado;

    resultado = potencia(numero,potencia )
    printf("%d", resultado);
}

int potencia(int base, int exponente) {
    if(exponente == 1)
        return base;
    else
        return base * potencia(base, exponente-1);
}
