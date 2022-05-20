//================================================


//==> Nombre del programa: Suma de 2 números
//==> Archivo : VanegasAlisson-SumaN.cpp
//==>Autor: Alisson Vanegas
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include<iostream>
using namespace std;

int main()
{ 
	int AC_c=0, AC_n; 
	float AC_s=0, AC_x;
	cout<<"Ingrese la cantidad de numeros a sumar :";
	cin>>AC_n;
	do{

		cout<<"Ingrese un numero :";
		cin>>AC_x;
		AC_c=AC_c+1;
		AC_s=AC_s+AC_x;
	}while(AC_c<AC_n);
	cout<<"La suma de los numeros es :"<<AC_s<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : VanegasAlisson-SumaN.cpp"<<endl;
	cout<<"//==>Autor: Alisson Vanegas"<<endl;
	cout<<"//==>Fecha de elaboracion: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizacion: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	
	return(0);
}
