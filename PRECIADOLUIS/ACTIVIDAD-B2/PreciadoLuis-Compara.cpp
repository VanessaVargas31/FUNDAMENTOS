#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int da, pe ;
	cout<<"\n\tCOMPARACION\n\n"<<endl;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> da;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> pe;
	if (da==pe)
		cout<<da<<" y "<<pe<<" Son iguales"<<endl;
	else
		if (da>pe)
			cout<<da<<" es mayor"<<endl;
		else
			cout<<pe<<" es mayor"<<endl;
	
	return 0;
}
