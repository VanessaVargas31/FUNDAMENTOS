//================================================


//==> Nombre del programa: Comparacion de 2 números
//==> Archivo : Compara.cpp
//==>Autor: Luis Montezuma
//==>Fecha de elaboración: 2022-01-10
//==>Fecha Última actualización: 2022-05- 15


//=================================================
#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int lm_n1, lm_n2 ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> lm_n1;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> lm_n2;
	if (lm_n1 == lm_n2)
		cout<<"Son iguales"<<endl;
	else
		if (lm_n1 > lm_n2)
			cout<<lm_n1<<" es mayor"<<endl;
		else
			cout<<lm_n2<<" es mayor"<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparacion de 2 números"<<endl;
	cout<<"//==> Archivo : Compara.cpp"<<endl;
	cout<<"//==>Autor: Luis Montezuma"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	
	return 0;
}
