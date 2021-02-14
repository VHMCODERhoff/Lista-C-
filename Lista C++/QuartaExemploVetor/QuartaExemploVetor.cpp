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

 int X[20],Y[20],N,i,n,Z[20];
 int Par;
 
int main ()
{ 
   cout<< "\nDigite Para Comecar:\n";
   cin>>n;
  cout<< "\nLeitura Dos Valores De V-Multiplos De 5:\n";
  for (i=1; i<=n; i++)
	{
		//============Calculo
          cout<<"\n V["<< i <<"]=";
          cin>>X[i];
          N=X[i];
          if (N-1==0){
          	Z[i]=X[i]*Y[i];
		  }
        //===============
	}
	for(i=1;i<=n;i++)
	{
		cout<<"\n Resultado ["<<i<<"]"<<Z[i];
	}
  system("pause");
    return 0;
}

