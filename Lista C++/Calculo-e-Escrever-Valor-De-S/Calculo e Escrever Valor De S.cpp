/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int P,K;
    float R,U;
    cout <<"[+]Calculo e Imprimir Valor De S\n"<<endl;
    	cout <<"\n================================"<<endl;
        cout <<"\n[+]Calculo => Comecando:" <<P<<endl;
        cout <<"\t[-]Base:" <<"S="<<endl;
        cout <<"\t[-]Somando:" <<"1/1"<<endl;
        cout <<"\t[-]Adicionando:" <<"-"<<endl;
        cout <<"\t[-]Somando:" <<"2/4"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Somando:" <<"3/9"<<endl;
        cout <<"\t[-]Adicionando:" <<"-"<<endl;
        cout <<"\t[-]Somando:" <<"4/16"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Continuando Multiplicando:" <<"+"<<endl;
        cout <<"\n================================"<<endl;
	    for(K=1,P=1,U=0;K<=10;K++,P++)
	    {
	        R=K/pow(P,2);
	        if(K%2!=0)
	        {
			   U=U+R;
			}
	        else
	        {
				U=U-R;
			}
	        cout<<" "<<setprecision(3)<<R<<" ";
	    }
	     cout <<"\n\n[*]Resultado: S="<<U<<"\n";
    system("pause");
    return 0;
}
