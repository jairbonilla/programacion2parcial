#include <iostream>

using namespace std;
/*ingresar 5 numeros comprendidos entre 50-100.
 ! si es v es falso y viseversa. obtener el promedio de los numeros pares

*/
int main()
{
    int num;
    int i;
    int menor=101,conta=0,suma=0,promedio=0;
    for(i=0;i<5;i++)
    {
        do
        {
            cout<<"N-"<<i+1<<"ingresar un numero entre 50 100  ";
            cin>>num;
        }while(!((num>=50)and (num<=100)));

        if (num<menor)
            menor=num;
        if(num%2==0)
           {
              conta++;
            suma+=num;
           }
    }
    if(conta<0)
    {
        promedio=suma/conta;
    }


        cout<<"numero menor...."<<menor<<"\n";
        cout<<"suma...."<<suma<<"\n";
        cout<<"numeros pares promedio...."<< promedio<<"\n";
}
