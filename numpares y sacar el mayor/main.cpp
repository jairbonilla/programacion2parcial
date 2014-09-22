#include <iostream>

using namespace std;
/*ingresar numeros pares y sacar el mayor*/
int main()
{
    int num;
    int mayor=0;
    int i;
    for(i=0;i<5;i++)
    {
      cout<<"ingresar numero par"  ;
      cin>>num;
      if (mayor<num)
       mayor=num;

    }

    cout<<"numero mayor"<<mayor<<"\n";


}
