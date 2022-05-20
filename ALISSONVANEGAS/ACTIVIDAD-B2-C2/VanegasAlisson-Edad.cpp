//================================================


//==> Nombre del programa: Calcular Edad
//==> Archivo : VanegasAlisson-Edad.cpp
//==>Autor: Alisson Vanegas
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include<iostream>
using namespace std;
int main()
{
	int AC_da,AC_ma,AC_aa,AC_dn,AC_mn,AC_an,AC_a,AC_m,AC_d;
	cout<<"Ingrese la fecha actual: Dia Mes AÃ±o :";
	cin>>AC_da>>AC_ma>>AC_aa;
	cout<<"Ingrese su fecha de nacimiento: Dia Mes AÃ±o :";
	cin>>AC_dn>>AC_mn>>AC_an;
	if(AC_da<AC_dn){
	 AC_da=AC_da+30;
	 AC_ma=AC_ma-1;
	 AC_d=AC_da-AC_dn;
 }
	else{
		AC_d=AC_da-AC_dn;
	}
	if(AC_ma<AC_mn){
		AC_ma=AC_ma+12;
		AC_aa=AC_aa-1;
		AC_m=AC_ma-AC_mn;
	}
	else{ 
		AC_m=AC_ma-AC_mn;
	}
	AC_a=AC_aa-AC_an;
	     cout<<"Usted tiene: " <<AC_a<< "aÃ±os" <<AC_m<< "meses" <<AC_d<< "y" <<AC_d<< "dias"<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Calcular Edad"<<endl;
	cout<<"//==> Archivo : VanegasAlisson-Edad.cpp"<<endl;
	cout<<"//==>Autor: Alisson Vanegas"<<endl;
	cout<<"//==>Fecha de elaboracion: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizacion: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
       return (0);
}

