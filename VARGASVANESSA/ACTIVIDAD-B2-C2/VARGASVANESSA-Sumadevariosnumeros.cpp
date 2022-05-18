//=====================================================================================
//==>Nombre del programa: Suma de varios numeros
//==>Archivo: VARGASVANESSA-Sumadevariodnumeros.cpp
//==>Autora: Vargas Vanessa
//==>Fecha de elaboración: 30-04-2022
//==>Fecha de ultima actualización: 18-05-2022
//====================================================================================




#include<iostream>
using namespace std;
int main()
{
	int VV_c=0, VV_n;
	float VV_s=0, VV_x;
	cout<<"Ingrese las cantidades de numeros que desea sumar: ";
	cin>>VV_n;
	do{

		cout<<"Ingrese un numero: ";
		cin>>VV_x;
		VV_c=VV_c+1;
		VV_s=VV_s+VV_x;
	}while(VV_c<VV_n);



	cout<<endl<<"//==============================================================="<<endl;
	cout<<"//===>Nombre del programa: Suma de varios numero"<<endl;
	cout<<"//===>Archivo: VARGASVANESSA-Sumadevariosnumeros.cpp"<<endl;
	cout<<"//===>Autora: Vargas Vanessa"<<endl;
	cout<<"//===>Fecha de elaboración: 30-04-2022"<<endl;
	cout<<"//===>Fecha de ultima actualización: 18-05-2022"<<endl;
	cout<<"//===================================================================="<<endl;





	cout<<"La suma de los numeros es: "<<VV_s<<endl;
	return (0);
}

