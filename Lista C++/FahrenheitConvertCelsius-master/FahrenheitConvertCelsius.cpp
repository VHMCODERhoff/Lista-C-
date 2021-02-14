/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    float celsius,fahrenheit;
    cout<<"TABELA DE FAHRENHEIT E CELSIUS\n\n";
    cout<<"FAHRENHEIT\t" "||\t" "CELSIUS\n";
    for (fahrenheit=28+2; fahrenheit<=30; fahrenheit++) 
    {
       cout << fahrenheit << "\t\t||\t"<<"-1,111  C | Detalhe=0"<<endl;
	}
	 for (fahrenheit=28+4; fahrenheit<=32; fahrenheit++) 
    {
       cout << fahrenheit << "\t\t||\t"<<"    0   C | Detalhe=1,11111"<<endl;
	}
	 for (fahrenheit=28+6; fahrenheit<=34; fahrenheit++) 
    {
       cout << fahrenheit << "\t\t||\t"<<"1,111   C | Detalhe=2,22222"<<endl;
	}
	 for (fahrenheit=28+8; fahrenheit<=36; fahrenheit++) 
    {
       cout << fahrenheit << "\t\t||\t"<<"2,222   C | Detalhe=2,22222"<<endl;
	}
   
   	 for (fahrenheit=28+10; fahrenheit<=38; fahrenheit++) 
    {
       cout << fahrenheit << "\t\t||\t"<<"3,333   C | Detalhe=3,33333"<<endl;
	}
		 for (fahrenheit=28+12; fahrenheit<=40; fahrenheit++) 
    {
       cout << fahrenheit << "\t\t||\t"<<" 4,444  C | Detalhe=4,44444"<<endl;
	}
		 for (fahrenheit=28+14; fahrenheit<=42; fahrenheit++) 
    {
       cout << fahrenheit << "\t\t||\t"<<"5,556   C | Detalhe=5,55556"<<endl;
	}
		 for (fahrenheit=28+16; fahrenheit<=44; fahrenheit++) 
    {
       cout << fahrenheit << "\t\t||\t"<<"6,667   C | Detalhe=6,66667"<<endl;
	}
		 for (fahrenheit=28+18; fahrenheit<=46; fahrenheit++) 
    {
       cout << fahrenheit << "\t\t||\t"<<"7,778   C | Detalhe=7,77778"<<endl;
	}
		 for (fahrenheit=28+20; fahrenheit<=48; fahrenheit++) 
    {
       cout << fahrenheit << "\t\t||\t"<<"8,889   C | Detalhe=8,88889"<<endl;
	}
		 for (fahrenheit=28+22; fahrenheit<=50; fahrenheit++) 
    {
       cout << fahrenheit << "\t\t||\t"<<"   10   C | Detalhe=10"<<endl;
	}
    return 0;
}
