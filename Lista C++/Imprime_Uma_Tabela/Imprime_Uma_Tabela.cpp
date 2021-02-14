/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int X,Y;
    cout<<"Insira o valor de N: ";
    cin>>X;
    cout<<" K"<<"\t"<<"K*2"<<"\t"<<"K*5"<<endl;
    cout<<"---------------------------"<<endl;
    for(Y=1;Y<=X;Y+=1)
        cout<<" "<<Y<<"\t"<<Y*2<<"\t"<<Y*5<<endl;
    cout<<"\n\n\n";
    return 0;
}
