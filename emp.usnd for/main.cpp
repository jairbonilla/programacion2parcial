#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    char nombre[30],resp;
    int turno;
    int i,horas,ph,pxh;
    int suma=0,tp=0,pb=0,ihss=0;
    double comis,pc,ventas,cp;

        cout<<"ingresar el nombre del empleado";
        cin.getline(nombre,30);

        for (i=0;i<7;i++)
           {

           cout<<"las ventas de la semana.....";
            cin>>ventas;
            suma+=ventas;
           }



            cout<<"turno de trabajo ";
            cin>>turno;



   switch(turno)
   {
   case 1:
    cp=0.5;
    break;
   case 2:
    cp=0.7;
    break;




    }
        pb=suma*cp;
        if(pb>7000)
        ihss=245;
        else
            ihss=0.035;
            tp = pb- ihss;

        _flushall();
        cout<<"seguro social"<<ihss<<"\n";
        cout<<"total a pagar"<<tp<<"\n";
}


