#include <stdio.h>
#include <ctype.h>

void convierteAMayusculas( char *ptrS ); /* prototipo */
int main()
{
char cadena[] = "caracteres y $32.98"; /* inicializa char arreglo */

printf( "La cadena antes de la conversion es : %s", cadena );
convierteAMayusculas( cadena );
printf( "\nLa cadena despues de la conversion es: %s\n", cadena );

 /* indica terminación exitosa */

} /* fin de main */
/* convierte una cadena a letras mayúsculas */
void convierteAmayusculas( char *ptrS ) {
    while ( *ptrS != '\0' ) { /* el carácter actual no es ‘\0’ */

        if ( islower( *ptrS ) ) { /* si el carácter es minúscula, */
            *ptrS = toupper( *ptrS ); /* Lo convierte a mayúscula */
        } /* fin de if */

        ++ptrS; /* mueve ptrS al siguiente carácter */
    } /* fin del while */

} /* fin de la función convierteAMayusculas */
