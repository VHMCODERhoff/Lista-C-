/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

//TABELA COM VALOR NA VARIAVEL

int main()
{
    int k,x,y;
    cout<<"K\t";
    cout<<"K*K";
    cout<<"\tK+3\n";
    cout<<"=====================\n";
    for (k=0, x=0, y=0; k<=10; k++,x=k*2,y=y+3)
    {
        cout << k << "-------";
        cout << x << "-------";
        cout << y << "\n";
       
    }

    return 0;
}