/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int P;
    
    cout <<"[+]Calculo Somatorio\n"<<endl;
    cout << "Insira o Valor Para Calcular:";
    cin >> P;
  
    if (P)
    {
    	cout <<"\n================================"<<endl;
        cout <<"\n[+]Calculo => Comecando Com o Seu Valor:" <<P<<endl;
        cout <<"\t[-]Base:" <<"S="<<endl;
        cout <<"\t[-]Somando:" <<"1 ao Quadrado de 2"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Somando:" <<"2 ao Quadrado de 2"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Somando:" <<"3 ao Quadrado de 2"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Somando:" <<"4 ao Quadrado de 2"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Somando:" <<"5 ao Quadrado de 2"<<endl;
        cout <<"\n================================"<<endl;
        cout <<"\n[*]Resultado: S=" <<P+1+4<<endl;//RESTA O RESULTADO QUE EU NÃO SEI RAIZ QUADRADA kkkkkKKKKKKKK
	}
    system("pause");
    return 0;
}
