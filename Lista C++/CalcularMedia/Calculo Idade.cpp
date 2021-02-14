/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int K,P;
    
    cout <<"[+]Comece Inserindo a Primeira Idade\n"<<endl;
    cout << "Insira a Primeira Idade:";
    cin >> P;
    cout <<"\n[+]Insira a Segunda Idade Idade\n"<<endl;
    cout << "Insira a Segunda Idade:";
    cin >> K;
  
    if (P)
    {
    	cout <<"\n=========================="<<endl;
        cout <<"\n[+]Calculo => Primeira Idade:" <<P<<endl;
        cout <<"\t[-]Comecando:" <<"Primeira Idade"<<endl;
         cout <<"\t[-]Somando:" <<"+"<<endl;
         cout <<"\t[-]Adicionando Calculo Segunda Idade:" <<"Segunda Idade:"<<K<<endl;
          cout <<"\n=========================="<<endl;
          cout <<"\n[*]Resultado:" <<P+K<<endl;
	}
	else   if (P=0)
   {
        system("pause");
   }
    system("pause");
    return 0;
}
}
