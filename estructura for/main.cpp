#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*presentar diez numeros usando for
*/
int main()
{
    srand(time(0));
    int numero,i;
    for (i=0;i<10;i++)

      {
          numero= 1+ rand()%(101-1);

          cout<<i<<"......"<<numero<<"\n";
       }

}
