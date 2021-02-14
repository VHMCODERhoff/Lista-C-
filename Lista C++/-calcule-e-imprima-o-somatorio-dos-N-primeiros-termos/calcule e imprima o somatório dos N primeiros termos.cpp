/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int P,K,n;
    float R,U;
    cout <<"[+]Calculo e Imprimir Somatorio Dos N Primeiros Termos\n"<<endl;
    cout << "Insira o Valor De N:";
    cin>>n;
    	cout <<"\n================================"<<endl;
        cout <<"\n[+]Calculo => Comecando:" <<P<<endl;
        cout <<"\t[-]Base:" <<"="<<endl;
        cout <<"\t[-]Removendo:" <<"1000/1"<<endl;
        cout <<"\t[-]Adicionando:" <<"-"<<endl;
        cout <<"\t[-]Somando:" <<"997/2"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Somando:" <<"994/3"<<endl;
        cout <<"\t[-]Adicionando:" <<"-"<<endl;
        cout <<"\t[-]Somando:" <<"991/4"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Continuando Multiplicando:" <<"+ e -"<<endl;
        cout <<"\n================================"<<endl;
	    for(K=1000,P=1,U=0;P<=n;P++,K-=3)
	    {
	        R=K/P;
	        if(P%2!=0)
	        {
			   U=U+R;
			}
	        else
	        {
				U=U-R;
			}
	        cout<<"SubResultado "<<R<<endl;
	    }
	     cout <<"\n[*]Resultado: ="<<U<<"\n";
    system("pause");
    return 0;
}
