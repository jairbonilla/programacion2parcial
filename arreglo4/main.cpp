#include <iostream>
#include <stdlib.h>
#include <stdio.h>
/* ingresar 5 alumnos en un registro con los siguientes datos
 nombre,p1,p2,promedio.
 usando un procedimiento ingresar el nombre y las notas.
 usar una funcion para calcular el promedio de un alumno .
 usar un procedimiento para calcular los promedios de todos los alumnos.
 usar una funcion para devolver el mejor alumno de todo el arreglo.
 elaborar un procedimiento para presentar un alumno.
 elaborar un procedimiento para presentar todos los empleados.

*/
using namespace std;
struct alumno
{
    char nombre[30];
    int p1,p2;/* validar que el turno es 1,2,3*/
    double promedio;
};
 int const n=5;
 alumno alum[n];
 alumno maxalum;
 void ingreso(alumno alum[], int n)
 {
     int i;
     for(i=0;i<n;i++)
     {
         cout<<"ingresar nombre del alumno";
         cin.getline(alum[i].nombre,30);
         cout<<"parcial 1  ";
         cin>>alum[i].p1;
         cout<<"parcial 2  ";
         cin>>alum[i].p2;
         _flushall();
     }
 }
 void calcular(alumno alum[])
{
    for(int i=0;i<5;i++)
    {
        alum[i].promedio=(alum[i].p1+alum[i].p2)/2;

    }
}
int main()
{
 ingreso(alum,n);
 calcular(alum);
}

