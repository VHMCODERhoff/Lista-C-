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
#include <iomanip>
using namespace std;

int main()
{
    int N;
    float den = 1, S = 0;
    cout << "Quantos termos tera' o Somatorio?";
    cin >> N;
    cout<<"\nValores Intermediarios De S:";
    cout << "\n ==============================\n";
    for (den=1;den<=N;)
    {
        S = S + 1/den;
       cout << " " << setprecision(4) <<S;
       den++; //ou den= den+1
    }
	cout << "\n ==============================\n";
	cout <<"\n\n Soma Dos "<<N<< "Termos = ";
    cout << S;
	cout << "\n\n\n";
    return 0;
}

