#include<stdio.h>
 
int main(){

  int y = 5;
  //ptr es un apuntador a entero
  int *ptrY = &y;  //se usa el operador de direccion para asignar al apauntador la direccion de una variable
  /*
    el operador de indireccion u operador de desreferencia devuelve el valor del objeto al que apunta su operando: operando = ptrY 
    objeto al que apunta : y 
    valor del objeto al que apunta : 5
  */
  printf("%d", *ptrY);


}