#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

int generarNumero(int num )
{  int numx;
    srand(time(0));// generar una nueva semilla
    numx = 1 + rand()%(100-1);
    return numx;
}


int sumaCifras(int num)
{
    int c,numx;
    c=0;
    while (num>0)
    {
        numx= num % 10;
        if (num%5==0)
        {
            c+=numx;
        }

        num= num/10;

    }
    return c;
}
void presentar(int num)
{
   int numx,i;

    while (num>0)
    {
        numx= num % 10;
        cout<<numx<<" ";
        for (i=0; i<numx;i++)
        {

        }
        cout<<"\n";

        num= num/10;

    }
}
void pedir(int li, int ls)
{
    cout<<"limite inferios";
    cin>>li;

 do
            {
               cout<<"limite superior...>";
               cin>>ls;
                _flushall();
            } while (ls<li);

}
int main()

{
     int num,xsuma;
    int ls,li;
    int mayor=0;


    num=generarNumero();
    xsuma=sumaCifras(num);
    cout<<"Numero "<<num<<" suma de pares "<<xsuma<<"\n";
    presentar(num);




}
