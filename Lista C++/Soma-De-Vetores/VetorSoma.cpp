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

 int vetor[20];
 int x;
 int y;
 float total;

int main ()
{ 
  cout<< "\tInsira o Valor Do Vetor:\n";
  cin>>y;
  cout<< "\tLeitura Dos Valores\n";
  cout<< "\t------------------------\n";
  for (x=1; x<=y; x++){
		//================
		 //Calculo
         cout<<"\n Valor["<< x <<"]=";
         cin>>vetor[x];
        //================			
   }
   for(x=1;x<=y;x++){
   	total=total+vetor[x];
   	cout<<"\nVetor["<<x<<"] ="<<total;
   }

	
  system("pause");
    return 0;
}

