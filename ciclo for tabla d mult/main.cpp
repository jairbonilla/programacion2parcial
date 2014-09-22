#include <iostream>

using namespace std;
/*ingrese la tabla de multiplicar a presentar, usar el ciclo for asi
1x5=5
2x5=10
*/
int main()
{
    int tabla,resp,i;

    cout<<"tabla de multiplicar a presentar....";
    cin>>tabla;
    for(i=1;i<=10;i++);

    {
        resp=i*tabla;
        cout<<i<<"X"<<tabla<<"=" <<resp<<"\n";
    }

}
