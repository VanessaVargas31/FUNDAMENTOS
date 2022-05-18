//======================================================================================
//===>Nombre del programa: Cuenta Moneda
//===>Archivo: VARGASVANESSA-CuentaMoneda.cpp
//===>Autora: Vargas Vanessa
//===>Fecha de elaboración: 30-04-2022
//===>Fecha de ultima actualización: 18-05-2022
//=====================================================================================




#include<iostream>
using namespace std;

int main()
{
	int VV_n, VV_c=0, VV_c1=0, VV_c2=0;
	float VV_x, VV_a=0, VV_a1=0, VV_a2=0, VV_m=0.10;
	cout<<"Ingrese la cantida de monedas: ";
	cin>>VV_n;
	do{
	cout<<"Ingrese cual es el valor de la moneda (0.10,0.25) : ";
	cin>>VV_x;
	VV_c=VV_c+1;
	VV_a=VV_a+VV_x;
	if(VV_x==VV_m){
		VV_c1=VV_c1+1;
		VV_a1=VV_a1+VV_x;
	}else{
		VV_c2=VV_c2+1;
		VV_a2=VV_a2+VV_x;
	}
	}while(VV_c<VV_n);




	cout<<endl<<"//====================================================================="<<endl;
	cout<<"//===>Nombre del programa: Cuenta Moneda"<<endl;
	cout<<"//===>Archivo: VARGASVANESSA-CuentaMoneda.cpp"<<endl;
	cout<<"//===>Autora: Vargas Vanessa"<<endl;
	cout<<"//===>Fecha de elaboración: 30-04-2022"<<endl;
	cout<<"//===>Fecha de ultima actualización: 18-05-2022"<<endl;
	cout<<"//==========================================================================="<<endl;







	cout<<"El total de monedas fue : "<<endl;
	cout<<"Cantidad de monedas ingresadas : "<<VV_c<<endl;
	cout<<"El total del dinero contado es de : "<<VV_a<<endl;
	cout<<"Monedas ingresadas de 0.10 ctvos es de :"<<VV_c1<<endl;
	cout<<"Cantidad total de monedas de 0.10 ctvos es de : "<<VV_a1<<endl;
	cout<<"Monedas ingresadas de 0.25 ctvos es de : "<<VV_c2<<endl;
	cout<<"Cantidad total de monedas de 0.25 ctvos es de : "<<VV_a2<<endl;


	return (0);

}


	
