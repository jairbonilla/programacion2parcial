#include <iostream>

using namespace std;
/* generar numeros aleatorios entre 1-500, contar cuantos son numeros
divisibles entre 5 y son pares a la vez, obtener su promedio y presentarlo
al final,el programa finalizara si encuentra un numero mayor a 300
o genera 10 numeros.
*/
int main()
{
    int num,cn5y2,conta;
    double promedio;
    srand(time(0));
    conta=0;
    while(conta<10 and (num<300))
    {
        num = 1 + rand()%(501-1);
        conta++;

        if ((num%5==0) and (num%2==0))
        {
            cn5y2++;
            suma5y2+=num;
        }
        cout<<"numero"<<num<<"\n";
    }
    if(cn5y2>0)
    promedio=(suma5y2/ cn5y2);
    else
    {
        promedio=0;
    }
       cout<<"promedio"<<promedio<<"/n";
       cout<<"contador divisible 5 y 2"<<cont5y2<<"/n";
       cout<<"suma de numeros divisibles entre 5 y 2"<<suma5y2<<"/n";



}
