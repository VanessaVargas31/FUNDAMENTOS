//================================================


//==> Nombre del programa: PuntodeVenta
//==> Archivo : Venta.cpp
//==>Autor: Luis Montezuma
//==>Fecha de elaboración: 2022-01-10
//==>Fecha Última actualización: 2022-05- 15


//=================================================
#include<iostream>
using namespace std;
int main()
{
	float lm_f, lm_q=0, lm_s=0, lm_r, lm_vb, lm_viva, lm_vdes, lm_vfi, lm_vft;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> lm_r;
	
	do
	{
		cout<<"Ingrese el valor del producto " <<lm_q+1 <<": " ;   cin>> lm_f;
		lm_q = lm_q+1;
		lm_s = lm_s+lm_f;
	}
	while(lm_q<lm_r);
	lm_vb = lm_s;
	lm_viva = lm_vb*0.12;
	lm_vdes = lm_vb*0.10;
	lm_vfi = lm_vb+lm_viva;
	lm_vft = lm_vfi-lm_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<lm_vfi<<endl;
	cout<<"Valor final es: "<<lm_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: PuntodeVenta"<<endl;
	cout<<"//==> Archivo : Venta.cpp"<<endl;
	cout<<"//==>Autor: Luis Montezuma"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
