#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    char nombre[30],resp;
    int turno;
    int i,horas,ph,pxh;
    int suma=0,ihss=0;
    double tp=0,pb=0,pc,ventas,cp,pihss=0;


do{


    cout<<"ingresar el nombre del empleado"<< "\n";
        cin>>nombre;

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
   case 3:
    cp=0.8;
    break;



    }
        pb=(suma*cp)+suma;

        if(pb>7000)
        ihss=245;
        else
           {

            pihss= (pb*0.035);
            tp = pihss+pb;
            }
        cout<<"seguro social "<<pihss<<"\n";
        cout<<"total a pagar"<<tp<<"\n";

        _flushall();
        cout<<"desea continuar(s'n)";
        cin>>resp;

        }while (resp!='s');






}
