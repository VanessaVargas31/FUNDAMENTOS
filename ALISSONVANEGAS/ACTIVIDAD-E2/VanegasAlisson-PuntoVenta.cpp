//================================================


//==> Nombre del programa: Control de Ventas
//==> Archivo : VanegasAlisson-PuntoVenta.cpp
//==>Autor: Alisson Vanegas
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include<iostream>
using namespace std;
int main()
{
	int AC_c=0, AC_P;
	float AC_A=0,AC_x,AC_Tb,AC_iva,AC_desc,AC_viva=0.12,AC_vdesc=0.30,AC_vt;
	cout<<"Ingrese la cantidad de productos: ";
	cin>>AC_P;
	do{
	   cout<<"Ingrese el valor de los productos: ";
	   cin>>AC_x;
	   AC_c=AC_c+1;
	   AC_A=AC_A+AC_x;
	   AC_iva=AC_A*AC_viva;
	   cout<<"El valor del iva de la compra es de: $"<<AC_iva<<endl;
	   AC_desc=AC_A*AC_vdesc;
	   cout<<"El valor del descuento de su compra es de:$"<<AC_desc<<endl;
	   AC_Tb=AC_iva+AC_desc;
	}while(AC_c<AC_P);
	if(AC_Tb==AC_A){
		cout<<"Su compra aplica para un descuento: "<<AC_Tb<<endl;
	AC_iva=AC_Tb*AC_iva/100;
	AC_desc=AC_Tb*AC_desc/100;
	}else{
		AC_vt=AC_A+AC_iva-AC_desc;
		cout<<"El valor total es de:$ "<<AC_vt<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Control de ventas"<<endl;
	cout<<"//==> Archivo : VanegasAlisson-PuntoVenta.cpp"<<endl;
	cout<<"//==>Autor: Alisson Vanegas"<<endl;
	cout<<"//==>Fecha de elaboracion: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizacion: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	}
	return(0);
}
