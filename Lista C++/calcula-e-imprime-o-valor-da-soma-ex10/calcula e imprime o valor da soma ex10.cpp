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
    float R,U,A;
    cout <<"[+]Calculo e Imprimir Valor Gerado De X\n"<<endl;
    	cout <<"\n================================"<<endl;
        cout <<"\n[+]Calculo => Comecando:" <<P<<endl;
        cout <<"\t[-]Base:" <<"="<<endl;
        cout <<"\t[-]Removendo:" <<"X25/1"<<endl;
        cout <<"\t[-]Adicionando:" <<"-"<<endl;
        cout <<"\t[-]Somando:" <<"X24/2"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Somando:" <<"X23/3"<<endl;
        cout <<"\t[-]Adicionando:" <<"-"<<endl;
        cout <<"\t[-]Somando:" <<"X22/4"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Continuando Multiplicando:" <<"+ e -"<<endl;
        cout <<"\t[-]GERANDO VALOR DE X"<<endl;
        cout <<"\n================================"<<endl;
	    for(K=5,A=25,P=1,U=0;P<=5;P++,K+=1,A-=1)
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
	     cout <<"\n[*]Resultado De X: ="<<U<<","<<A<<"\n";
    system("pause");
    return 0;
}
