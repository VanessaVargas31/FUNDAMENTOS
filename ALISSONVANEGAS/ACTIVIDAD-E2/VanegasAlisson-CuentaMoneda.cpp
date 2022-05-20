//================================================


//==> Nombre del programa: Contador de monedas
//==> Archivo : VanegasAlisson-CuentaMoneda.cpp
//==>Autor: Alisson Vanegas
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include<iostream>
using namespace std;
int main()
{ 
	int AC_n, AC_c=0, AC_c1=0, AC_c2=0;
	float AC_x,AC_a=0, AC_a1=0, AC_a2=0;
	cout<<"Â¿Cuantas monedas va a inggresar?: ";
	cin>>AC_n;
	do{
	cout<<"Ingrese el valor de la moneda (0.10, 0.25): ";
	cin>>AC_x;
	AC_c=AC_c+1;
	AC_a=AC_a+AC_x;
	if(AC_x==0.10){

		AC_c1=AC_c1+1;
		AC_a1=AC_a1+AC_x;
	}else{
		AC_c2=AC_c2+1;
		AC_a2=AC_a2+AC_x;
	}
	}while(AC_c<AC_n);
	cout<<"El resultado es :"<<endl;
	cout<<"Cantidad de monedas ingresadas :"<<AC_c<<endl;
	cout<<"Total del dinero contado :"<<AC_a<<endl;
	cout<<"Cantidad de monedas ingresadas de 0.10ctv :"<<AC_c1<<endl;
	cout<<"Total del dinero de monedas de 0.10ctv :"<<AC_a1<<endl;
	cout<<"Cantidad de monedas ingresadas de 0.25ctv :"<<AC_c2<<endl;
	cout<<"Total del dinero de monedas de 0.25cvt :"<<AC_a2<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de Monedas"<<endl;
	cout<<"//==> Archivo : VanegasAlisson-CuentaMoneda.cpp"<<endl;
	cout<<"//==>Autor: Alisson Vanegas"<<endl;
	cout<<"//==>Fecha de elaboracion: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizacion: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return(0);
}
