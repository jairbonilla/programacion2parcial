#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
const int t=4;
char nombre[t][30];

void ingresocadena(char nombre[t][30])
{
    for(int i=0;i<=t;i++)
    {
        cout<<"ingresar el nombre ";
        cin.getline(nombre[i],30);
    }
}
void comparar(char nombre[t][30])
{
    char cadcompa[30];
    cout<<"ingresar cadena a comparar";
    cin.getline(cadcompa,30);
    for(int i =0;i<=t;i++)
    {
        if(strcmp(nombre[i],cadcompa)==0)
        {
            cout<<"comparacion correcta con"<<nombre[i]<<"\n";
        }
    }
}
int main()
{
    ingresocadena(nombre);
    comparar(nombre);
    cout<<"\n"<<"otro tipo de comparacion"<<"\n";
    return 0;
}
