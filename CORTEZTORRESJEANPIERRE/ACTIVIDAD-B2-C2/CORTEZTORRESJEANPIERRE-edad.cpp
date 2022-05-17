//==================================================
//==>Nombre del programa: edad
//==>Autor: CORTEZ TORRES JEAN PIERRE
//==> Archivo: CORTEZTORRESJEANPIERRE-edad.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//==================================================
#include<iostream>
using namespace std;

int main ()
{
	int ct_AA,ct_MA,ct_DA,ct_AN,ct_MN,ct_DN,ct_A,ct_M,ct_D;
	cout<<"Ingrese la fecha actual (AAAA MM DD): ";
	cin>>ct_AA>>ct_MA>>ct_DA;
	cout<<"Ingrese su fecha de nacimiento (AAAA MM DD): ";
	cin>>ct_AN>>ct_MN>>ct_DN;
	if(ct_DA>=ct_DN){
	ct_D=ct_DA-ct_DN;
	}else{
	ct_DN=ct_DN+30;
	ct_MA=ct_MA-1;
	ct_D=ct_DA-ct_DN;
	}
	if(ct_MA>=ct_MN){
	ct_M=ct_MA-ct_MN;
	}else{
	ct_MN=ct_MN+12;
	ct_AA=ct_AA-1;
	ct_M=ct_MA-ct_MN;
	}
	ct_A=ct_AA-ct_AN;
//==================================================
//==>Nombre del programa: edad
//==>Autor: CORTEZ TORRES JEAN PIERRE
//==> Archivo: CORTEZTORRESJEANPIERRE-edad.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//==================================================
	cout<<"Usted tiene "<<ct_A<<" años "<<ct_M<<" meses  y"<<ct_D<<" dias ";
	return(0);
}
