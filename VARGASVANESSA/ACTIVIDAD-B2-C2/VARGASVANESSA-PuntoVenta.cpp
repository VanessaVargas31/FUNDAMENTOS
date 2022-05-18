//====================================================================================
//==>Nombre del programa: Punto de Venta
//==>Archivo: VARGASVANESSA-PuntoVenta.cpp
//==>Autora: Vargas Vanessa
//==>Fecha de elaboración: 30-04-2022
//==>Fecha de ultima actualización: 18-05-2022
//===================================================================================




#include<iostream>
using namespace std;
int main ()
{
	int VV_C=0, VV_P;
	float VV_A=0,VV_X,VV_Vb,VV_Viva,VV_Vdes,VV_Iva=0.12,VV_Descu=0.10,VV_Vf;
	cout<<"Ingrese la cantidad de productos comprados: ";
	cin>>VV_P;
	do{
	cout<<"Ingrese el valor de los productos comprados: ";
	cin>>VV_X;
	VV_C=VV_C+1;
	VV_A=VV_A+VV_X;
	VV_Viva=VV_A*VV_Iva;
	cout<<"El valor del iva de la compra es de: $"<<VV_Viva<<endl;
	VV_Vdes=VV_A*VV_Descu;
	cout<<"El valor del descuento de la compra es de: $"<<VV_Vdes<<endl;
	VV_Vb=VV_Viva+VV_Vdes;
	}while(VV_C<VV_P);
	if(VV_Vb==VV_A){
	cout<<"La compra es beneficiaria para un descuento: "<<VV_Vb<<endl;
	VV_Iva=VV_Vb*VV_Viva/100;
	VV_Descu=VV_Vb*VV_Vdes/100;
      }else{
	VV_Vf=VV_A+VV_Viva-VV_Vdes;



	cout<<endl<<"//====================================================================="<<endl;
	cout<<"//===>Nombre del programa: Punto de Venta"<<endl;
	cout<<"//===>Archivo: VARGASVANESSA-PuntoVenta.cpp"<<endl;
	cout<<"//===>Autora: Vargas Vanessa"<<endl;
	cout<<"//===>Fecha de elaboración: 30-04-2022"<<endl;
	cout<<"//===>Fecha de ultima actualización: 18-05-2022"<<endl;
	cout<<"//==========================================================================="<<endl;






	cout<<"El valor final de su compra es de: $"<<VV_Vf<<endl;
      }
	return(0);
}
