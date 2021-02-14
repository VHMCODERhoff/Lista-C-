/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

 int i[20],x,y;

int main ()
{
   cout<< "\nDigite o numero de vetores Para Comecar:\n";
   cin>>x;
  cout<< "\nLeitura Dos Valores De X:\n";
  for (y=1; y<=x; y++)
{
//============Calculo
 cout<<"\n Valor["<< y <<"]=";
 cin>>i[y];
}

for(y=1;y<=x;y++)
{
    cout<<"\n Vetor ["<<i<<"] = "<<x[i];
    }
system("pause");
return 0;
}

