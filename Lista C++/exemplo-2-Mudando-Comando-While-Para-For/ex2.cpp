/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int N,X,K=1, S= 0;
    cout << "Quantos Numeros Serao Lidos?";
    cin >> N;
    cout<<"\nInicio Da Leitura Dos "<<N<<"Numeros";
    cout << "\n ==============================\n";
    for (K=1;K<=N;)
    {
		cout << "Digite o "<<K<<"O Numero a Ser Somado:";
		cin >> X;
		
        S = S + X;
        K = K + 1; ///ou simplesmente K++
    }
    cout << "\n Fim Da Leitura Dos "<<N<< "Numeros";
	cout << "\n ==============================\n";
	cout <<"\n\n Soma Dos "<<N<< "Numeros Lidos = ";
    cout << S;
	cout << "\n\n\n";
    return 0;
}

