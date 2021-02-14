#include <iostream>

using namespace std;

int main()
{
	int N;
    float den = 5, s = 0;
    cout <<"[+]5 Casas Decimais\n"<<endl;
    cin >> N;
    if(N <= den)
   {
   	system("pause");
   }
    	cout <<"\n================================"<<endl;
        cout <<"\n[+]Calculo => Comecando:" <<0<<endl;
        cout <<"\t[-]Base:" <<"="<<endl;
        cout <<"\t[-]Removendo:" <<"4/3"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Somando:" <<"4/5"<<endl;
        cout <<"\t[-]Adicionando:" <<"-"<<endl;
        cout <<"\t[-]Somando:" <<"4/7"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Somando:" <<"4/9"<<endl;
        cout <<"\t[-]Adicionando:" <<"+"<<endl;
        cout <<"\t[-]Somando:" <<"4/11"<<endl;
        cout <<"\t[-]Continuando Multiplicando:" <<"+"<<endl;
        cout <<"\n================================"<<endl;
	    while(den<=N)
	   {
	   	s = (s + 5 ) / den;
	   	den = (den + 1);
	   }
	     cout <<"\n[*]Resultado: =\t"<<N<<"\t";
	     cout <<"\n[*]Resultado: =\t"<<s<<"\t";
	     cout <<"\n================================"<<endl;
    system("pause");
    return 0;
}
