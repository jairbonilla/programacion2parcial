#include <iostream>

using namespace std;


const int  lin=3;
const int col=5;
int num[lin][col];
void ingreso(int num[lin][col])
{
    for (int l=0;l<=lin-1;l++)
    {
        for(int c=0;c<=4;c++)
        {
            cout<<"Numero["<<l<<","<<c<<"]...:";
            cin>>num[l][c];
        }
    }
}
void sumar (int num[lin][col])
{       for(int c=0;c<=col;c++)
            {   num[lin][c]=0;

                for (int l=0;l<=lin-1;l++)
                {
                    num[lin][c]+= num[l][c];

                }

            }

}
void presentar(int num[lin][col])
{
    for (int l=0;l<=lin;l++)
    {
        if (l==3)
            {
                for(int c=0;c<=col-1;c++)
                {
                    if (num[3][c]%2==0)
                    cout<<num[3][c]<<"\t";
                    else
                        cout<<"0"<<"\t";
                }break;
            }

        for(int c=0;c<=col-1;c++)
        { cout<<num[l][c]<<"\t";

        }




        cout<<"\n";

    }
}

int main()
{
    ingreso(num);
    sumar(num);
    presentar(num);

}
