#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/* generar un arreglo que se llama base 5 numeros entre 1 y 10
igual que en el otro arreglo que se llama expo.
usar un procedimiento.
luego determinar la potencia elevando la base al expo
y copiar en otro arreglo.*/
int const n=5;
int base[n];
int expo [n];
long pot[n];
void generar numeros(int base[], int expo[],int n)
{
    int i;
    srand(time());
    for(i=0;i<n;i++)
    {
        base[i]=1 + rand()%(10-1);
        expo[i]=1 + rand()%(10-1);
    }





}
long potencia(int base,int expo)
{
    int i;
    int pot;
    for(i=0;i<n;i++)
    {
        pot=base *pot;
    }
    return pot;
}
void calcular(int base[], int expo[],long pot[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        pot[i]=potencia(base[i],expo[i]);
    }



}
void presentar(int base[], int expo[],long pot[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        cout<<base[i]<<"elevado a la"<<expo[i]<<"es"<<pot[i]"\n";
    }

}
int main()
{
    generar(base,expo,n);
    calcular(base,expo,pot,n);
    presentar(base,expo,pot,n);
}
