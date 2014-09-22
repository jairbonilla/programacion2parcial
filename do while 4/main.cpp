#include <iostream>
#include <stdlib.h>

using namespace std;
/* ingresar nombre del empleado
las horas de 4 dias trabajado, usar un ciclo for para ingresar
las 4 horas, luego debera de presentar el total de las horas,se determina
el pago por hora usando la sona de trabajo.
ZONA  PAGO
A     150
B     200
C     250
Determinar el salario,ihss y total a pagar.
preguntar si desea continuar(validar respuesta).
*/
int main()
{
   char nombre[30];
   int num,pago,i;
   int pz,zona,suma;
   int htrabajadas=0;

   cout<<"ingresar nombre del trabajador";
   cin.getline(nombre,30);

    cout<<"ingresar horas trabajadas";
    cin>>htrabajadas;
   do{

    cout<<"Zona de trabajo";
    cin>>zona;
   }while(!((zona>=1)and(zona<=3)));
   switch(zona)
   {
   case 1:
    pz=150;
    break;
   case 2:
    pz=200;
    break;


   }
}


