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
    int N,A,K=2, S= 0;
    cout << "Digite Um Valor Para N:";
    cin >> N;
    cout<<"\n\n Soma Dos "<<N<<"Primeiros Pares";
    for (K=2;K<=2*N;)
    {
        S = S + K;
        K = K +2;
    }
    cout << S;
    cout << "\n\n\n";
    return 0;
}


