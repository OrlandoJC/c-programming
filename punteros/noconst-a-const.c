#include<stdio.h>
 /*
 autor: orlando de jesus
 */
//puntero es un apuntado a una constante caracter
void imprimeString(const char *puntero);

int main(){
    char cadena[] = "cadena para imprimir!";

    printf("la cadena es:\n");
    imprimeString(cadena);
}

void imprimeString(const char *puntero){
    for(;*puntero != '\0'; puntero++)
        printf("%c", *puntero);
}