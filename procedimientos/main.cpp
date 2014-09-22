#include <iostream>

using namespace std;
/* ingresar dos numeros usando un procedimieto,luego calcular la suma
el numero mayor de ambos numeros usando un procedimiento,precentar
los datoss*/
int num1,num2,suma,mayor,menor;
int menornumero(int num1, int num2)
{
    int menor;
    if(num1<num2)
        menor=num1;
            else
        menor=num2;
        return menor;
}
void ingresar(int &num1,int &num2)/*si le quitamos el amper se transm los valores
siguientes o de abajo y si no mantiene los que les dimos*/
{
    cout<<"ingresar numero uno  ";
    cin>>num1;
    cout<<"ingresar numero dos  ";
    cin>>num2;

}
void calcular(int num1, int num2,int &mayor,int &suma)
            {
                suma=num1+num2;
                if(num1>num2)
                    mayor=num1;
                else
                    mayor=num2;

            }
int main()
{
    num1=0;
    num2=0;
  ingresar(num1,num2);
  calcular(num1,num2,mayor,suma);
  menor=menornumero(num1,num2);
    cout<<"valor numero1 "<<num1<<"\n";
   cout<<"valor numero2 "<<num2<<"\n";
   cout<<"suma de los numeros"<<suma<<"\n";
    cout<<"mayor de los dos numeros"<<mayor<<"\n";
     cout<<"menor de los dos numeros"<<menor<<"\n";
}
