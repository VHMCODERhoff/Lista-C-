#include<stdio.h>
#include<iostream>
#include<iomanip>
#include <windows.h>
using namespace std;

 int X[20],Y[20],N,i,n,Z[20];
 int Par;

int main ()
{
   cout<< "\nDigite a quantidade de vetores:\n";
   cin>>n;
  cout<< "\nLeitura Dos Valores De V-Multiplos De 5:\n";
  for (i=1; i<=n; i++)
    {
//Calculo x
for (i=1; i<=n; i++){
          cout<<"\nV["<< i <<"]=";
          cin>>X[i];
          N=X[i];}
          cout<<"\n";
//===============
 for (i=1; i<=n; i++)
    {cout<<"\nY["<<n<<"] :";
    cin>>Y[i];

    }
    }
    for(i=1;i<=n;i++)
    {   Z[i]=X[i]*Y[i];
        cout<<"\n Resultado ["<<i<<"]"<<Z[i];
    }
    cout<<"\n";
  system("pause");
    return 0;
}
