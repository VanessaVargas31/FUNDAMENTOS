//====================================================================================
//===>Nombre del programa: La edad
//===>Archivo: VARGASVANESSA-Laedad.cpp
//===>Autora: Vargas Vanessa
//===>Fecha de elaboración: 30-04-2022
//===>Fecha de ultima actualización: 18-05-2022
//===================================================================================




#include<iostream>
using namespace std;

int main ()
{
	int VV_AA,VV_MA,VV_DA,VV_AN,VV_MN,VV_DN,VV_A,VV_M,VV_D;
	cout<<"Ingrese la fecha actual (VV_AAAA VV_MM VV_DD): ";
	cin>>VV_AA>>VV_MA>>VV_DA;
	cout<<"Ingrese su fecha de nacimiento (VV_AAAA VV_MM VV_DD): ";
	cin>>VV_AN>>VV_MN>>VV_DN;
	if(VV_DA>=VV_DN){
	VV_D=VV_DA-VV_DN;
	}else{
	VV_DN=VV_DN+30;
	VV_MA=VV_MA-1;
	VV_D=VV_DA-VV_DN;
	}
	if(VV_MA>=VV_MN){
	VV_M=VV_MA-VV_MN;
	}else{
	VV_MN=VV_MN+12;
	VV_AA=VV_AA-1;
	VV_M=VV_MA-VV_MN;
	}
	VV_A=VV_AA-VV_AN;



	cout<<endl<<"//===================================================================="<<endl;
	cout<<"//===>Nombre del programa: La edad"<<endl;
	cout<<"//===>Archivo: VARGASVANESSA-PuntoVenta.cpp"<<endl;
	cout<<"//===>Autora: Vargas Vanessa"<<endl;
	cout<<"//===>Fecha de elaboración: 30-04-2022"<<endl;
	cout<<"//===>Fecha de ultima actualización: 18-05-2022"<<endl;
	cout<<"//=========================================================================="<<endl;




	cout<<"Usted tiene "<<VV_A<<" años "<<VV_M<<" meses  y"<<VV_D<<" dias ";
	return(0);
}


