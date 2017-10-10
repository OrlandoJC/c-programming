#include <stdio.h>
#define ESTUDIANTES 3
#define EXAMENES    4

/*prototipos*/
int minimo(const int calificaciones[][EXAMENES], int alumnos, int examenes);
int maximo(const int calificaciones[][EXAMENES], int alumnos, int examenes);
double promedio(const int estableceCalif, int examenes);
void desplegarArreglo(const int calificaciones[][EXAMENES], int alumnos, int examenes); 

int main(){
    int estudiante;

    const int calificacionesEstudiantes[ESTUDIANTES][EXAMENES] = 
    { {80, 90, 60, 50},
      {45, 70, 89, 96},
      {90, 87, 76, 89}};
    
    printf("el arreglo : ");
    desplegarArreglo();

    printf("la calificacion mas baja es %d\n la calificacion mas alta es : %d\n",
        minimo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES),
        maximo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES));

    printf("promedio de cada estudiante: \n");

    for(estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
        printf("el promedio del estdiante %d es: %.2f\n",
            estudiante, promedio(calificacionesEstudiantes[estudiante],EXAMENES));
    }

}

int minimo(const int calificaciones[][EXAMENES], int alumnos, int examenes){
    int i,j,
        calificacionBaja = 100;
    for(i = 0; i < alumnos; i++) {
        for(j = 0; j < examenes; j++) {
            if(calificaciones[i][j] < calficacionBaja) 
                calificacionBaja = calificaciones[i][j];
        }
    }    

    return calficacionBaja;
}

int maximo(conts int calificaciones[][EXAMENES], int alumnos, int examenes){
    int i,j,
        calificacionAlta = 0;
    for(i = 0; i < alumnos; i++) {
        for(j = 0; j < examenes; j++) {
            if(calificaciones[i][j] > calificacionAlta) 
                calificacionAlta = calificaciones[i][j];
        }
    }    

    return calificacionAlta;
}

double promedio(const int conjuntoDeCalificaciones[], int examenes){
    int i, total = 0;

    for(i = 0; i < examenes; i++) {
        total += conjuntoDeCalificaciones[i];
    }

    return (double) total/examenes;
}

void desplegarArreglo(const int calificaciones[][EXAMENES], int alumnos, int examenes){
    int i, j;

    for(i = 0; i < alumnos;i++) {
        printf("calificaicones estudaintes[%d]", i);

        for(j = 0; j < examenes; j++) {
            printf("calificaiones: %-5d",calificaciones[i][j]);
        }
    }
}