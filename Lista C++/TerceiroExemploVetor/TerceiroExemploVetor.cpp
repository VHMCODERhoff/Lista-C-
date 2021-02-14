#include<stdio.h>
#include<iostream>
#include<iomanip>
#include <windows.h>
using namespace std;

 int K[20],N,i,n;
 int Par;

int main ()
{
   cout<< "\nDigite o numero de vetores Para Comecar:\n";
   cin>>n;
  cout<< "\nLeitura Dos Valores De X:\n";
  for (i=1; i<=n; i++)
{
//============Calculo
 cout<<"\n V["<< i <<"]=";
 cin>>K[i];
  N=K[i];

if (N%2==0)
 {Par=Par+K[i];}
//===============
}

for(i=1;i<=n;i++)
	{
    cout<<"\n Resultado ["<<i<<"] ="<<K[i];
	}

cout<<"\n\nTotal de Vetores multiplos de 2 somados:"<<Par<<"\n";
system("pause");
return 0;
}
