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

 int K,N,R,i;
int main ()
{ 
  cout<< "\nLeitura do N:";
  cin >> N;
  cout<< "\nLeitura do K:";
  cin>>K;
  cout<< "\nResultado | Somatorio => Vetor:";
  if(N and K)
  {
  	for (i=0; i<N; i++)
	{
		//============Calculo
          R=N+K;
        //===============
	cout <<"\n["<<i+1<<"]"<<"=";
	cout << R+i;
	}
  }
  system("pause");

    return 0;
}

