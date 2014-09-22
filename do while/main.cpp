#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*
  ingresar un numero hasta que el usuario diga que no
  quiere ingresar mas numero.

*/
int main()
{
  int num;
  int mayor=0;
  char respuesta;

  do
  {
     cout<<"ingresar un numero  ";
     cin>>num;
    _flushall();
    if(mayor<num)
      {
          mayor=num;
      }
    do
    {

     cout<< "desea continuar";
     cin.get(respuesta);
        _flushall();
    }while((respuesta!='S')and(respuesta!='N'));

  }while(respuesta!='N');
  cout<<"el numero mayor es.."<<mayor<<"\n";
}
