//==================================================
//==>Nombre del programa: cuentamoneda
//==>Autor: CORTEZ TORRES JEAN PIERRE
//==> Archivo: CORTEZTORRESJEANPIERRE-cuentamoneda.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//==================================================
#include<iostream>
using namespace std;

int main()
{
	int ct_n, ct_c=0, ct_c1=0, ct_c2=0;
	float ct_x, ct_a=0, ct_a1=0, ct_a2=0, ct_m=0.10;
	cout<<"Ingrese la cantida de monedas: ";
	cin>>ct_n;
	do{
	cout<<"Ingrese cual es el valor de la moneda (0.10,0.25) : ";
	cin>>ct_x;
	ct_c=ct_c+1;
	ct_a=ct_a+ct_x;
	if(ct_x==ct_m){
		ct_c1=ct_c1+1;
		ct_a1=ct_a1+ct_x;
	}else{
		ct_c2=ct_c2+1;
		ct_a2=ct_a2+ct_x;
	}
	}while(ct_c<ct_n);
//==================================================
//==>Nombre del programa: cuentamoneda
//==>Autor: CORTEZ TORRES JEAN PIERRE
//==> Archivo: CORTEZTORRESJEANPIERRE-cuentamoneda.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//==================================================
	cout<<"El total de monedas fue : "<<endl;
	cout<<"Cantidad de monedas ingresadas : "<<ct_c<<endl;
	cout<<"El total del dinero contado es de : "<<ct_a<<endl;
	cout<<"Monedas ingresadas de 0.10 ctvos es de :"<<ct_c1<<endl;
	cout<<"Cantidad total de monedas de 0.10 ctvos es de : "<<ct_a1<<endl;
	cout<<"Monedas ingresadas de 0.25 ctvos es de : "<<ct_c2<<endl;
	cout<<"Cantidad total de monedas de 0.25 ctvos es de : "<<ct_a2<<endl;
	return (0);
}
