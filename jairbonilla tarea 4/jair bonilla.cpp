#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;
int na,ne,nf,mayor;
 char resp,nombre[30];

 void ingresardatos(int &na,int &ne)
 {
    cout<<"Nota Acumulada. ";
    cin>>na;
    cout<<"Nota Examen.... ";
    cin>>ne;
 }

 void notafinal(int na,int ne,int &nf)
 {

    nf=na+ne;
 }

 char prespuesta()
{
    char resp;
    do
      {
      cout<<"Desea continuar:>";
      cin.get(resp);
      _flushall();
      }while ((resp !='S')and (resp !='N'));
      return resp;



}

int main()
{
    int mayor;
    mayor =0;

    do
     {
      cout<<"Ingresar Nombre... : ";
      cin.getline(nombre,30);
     cout<<endl<<endl;
      nf=0;

      ingresardatos(na,ne), notafinal(na,ne,nf);

      nf=na+ne;

     cout<<endl<<endl;
      cout<<"Valor Nota Final.... : "<<nf<<"\n";

        if(mayor<nf)
                  {
                     mayor=nf;
                  }

       _flushall();
      resp=prespuesta();

      }while(resp !='N');



  cout<<"Mejor nota.. : "<<mayor<<"\n";

}

