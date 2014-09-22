#include <iostream>
#include <stdlib.h>
#include <stdio.h>
/* funcion del ihss de un sueldo.
necesitamos el pago por hora para un empleado
turno   pxh
1       120
2       150
3       180
*/

using namespace std;
struct empleado
{
    char nombre[30];
    int horas,turno;/* validar que el turno es 1,2,3*/
    double pxh,pb,ihss,tp;
};
 int const n=5;
 empleado emple[n];
 empleado maxemple;
 void ingreso(empleado emple[], int n)
 {
     int i;
     for(i=0;i<n;i++)
     {
         cout<<"ingresar nombre del empleado";
         cin.getline(emple[i].nombre,30);
         cout<<"horas trabajadas  ";
         cin>>emple[i].horas;
         do
         { cout<<"turno de trabajo   ";
         cin>>emple[i].turno;

         }while(!(( emple[i].turno>=1)and (emple[i].turno<=3)));
         _flushall();
     }
 }

double seguro(double pb)
{
    if(pb>7000)
        return 245;
    else
        return 0.035 *pb;
}
double pagoxhora(int turno)
{

        switch (turno)
        {
        case 1:
            return 120;
            break;
        case 2:
            return 150;
                 break;
        default:
            return 180;
            break;
        }


}
void calcular (empleado emple[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        emple[i].pxh=pagoxhora(emple[i].turno);
        emple[i].pb=emple[i].pxh*emple[i].horas;
        emple[i].ihss=seguro(emple[i].pb);
        emple[i].tp=emple[i].pb-emple[i].ihss;

    }
}
void presentar_reg(empleado emple)
{
     cout<<"empleado   "<<emple.nombre<<"\n";
    cout<<"pago por hora "<<emple.pxh << "\n";
    cout<<"pago bruto "<<emple.pb << "\n";
    cout<<"ihss "<<emple.ihss << "\n";
    cout<<"total pagar "<<emple.tp << "\n";
}
void presentar (empleado emple[] ,int n)
{

   int i;
    for(i=0;i<n;i++)
    {
        presentar_reg(emple[i]);

    }
}
empleado mayoremple(empleado emple[],int n)
{
    int i;
    empleado xmax;
    xmax=emple[0];
    for(i=0;i<n;i++)
       {
          xmax=emple[i];
       }

    return xmax;
}
int main()
{
    ingreso(emple,n);
    calcular(emple,n);
    presentar(emple,n);
    maxemple=mayoremple(emple,n);
    cout<<"****** el mejor empleado es ******";
    presentar_reg(maxemple);

}
