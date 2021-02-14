/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float q,i;
    cout<<"TABELA DE LIBRA PARA QUILOGRAMA\n\n";
    cout<<"LIBRA\t" "\t||\t" "QUILOGRAMA\n";
     for (q=5; q<=100; q=q+5)
    {
        i = q*0.454;
        cout << setw(3) << q << "\t\t||\t" << setprecision(5) << setw(5) << i << endl;
    }
   
    return 0;
}
