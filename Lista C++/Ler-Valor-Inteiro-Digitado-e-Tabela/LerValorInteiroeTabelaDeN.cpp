/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n,q;
    cout<<"TABELA DE N E LER NUMERO\n\n";
    cout<<"N\t" "VALOR" "\t||\t" "NUMERO LIDO\n";
    for (n=1; n<=100;n++) 
    {
        cout << "\t";
       cin>>q;
       cout <<n<< "\t\t||\t"<<q<<endl;
       q++;
       
	}

    return 0;
}
