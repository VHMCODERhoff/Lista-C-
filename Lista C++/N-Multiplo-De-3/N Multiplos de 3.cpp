/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,K;
    K=3;
    cout <<"[+]Comece Inserindo Um Valor Abaixo De 3 Para Ter o Calculo e Resultado Mostrado\n"<<endl;
    cout << "Insira o Valor:";
     cin >> n;
   
    if (n<=K)
    {
    	cout <<"\n=========================="<<endl;
        cout <<"\n[+]Calculo => Multiplo:" <<K<<endl;
        cout <<"\t[-]Somando:" <<"+"<<endl;
         cout <<"\t[-]Conclusao:" <<K+3<<endl;
         cout <<"\t[-]Somando:" <<"+"<<endl;
          cout <<"\t[-]Conclusao:" <<K+3+3<<endl;
          cout <<"\t[-]Somando:" <<"+"<<endl;
          cout <<"\n=========================="<<endl;
          cout <<"\n[*]Resultado:" <<K+3+3+3<<endl;
	}
    system("pause");
    return 0;
}
