/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;

//TABELA COM VALOR NA VARIAVEL DE RAIZ QUADRADA

int main()
{
    float y;
    cout<<"K\t";
    cout<<"||";
    cout<<"Raiz Quadrada De K\n";
    cout<<"===============================\n";
    for (y=1; y<=100; y++)
    {
        cout << y << "----------"<<sqrt(y)<<endl;
    }

    return 0;
}