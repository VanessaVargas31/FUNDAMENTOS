/* 
   //=====Nombre del programa: LaEdad
   //=====Archivo: LaEdad.cpp
   //=====Autor: Arturo Kevin
   //=====Fecha de elaboración: 30-04-2022
   //=====Fecha de ultima actualización: 20-05-2022
*/
#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
	int kg_da, kg_ma, kg_aa, kg_dn, kg_mn, kg_an, kg_e, kg_m, kg_d;
	    
		cout<<"Nombre del programa: Determinador de Edad"<<endl;
        cout<<"Archivo: Edad.cpp"<<endl;
        cout<<"Autor: Arturo Kevin"<<endl;
        cout<<"Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"Fecha de ultima actualización: 20-05-2022"<<endl;
        
	cout<<"\n\n_-_-_-_-_-_-_-_- Calculadora de Edad -_-_-_-_-_-_-_-_"<<endl;
	cout<<"Porfavor digite la fecha actual con el siguiente formato Fecha/Mes/Año: "<<endl;
	
	cin>>kg_da; cin>>kg_ma; cin>>kg_aa;
	cout<<"------------------------------------------"<<endl;
	
	cout<<"Porfavor, digite la fecha de su nacimiento con el siguiente formato Fecha/Mes/Año"<<endl;
	cout<<"Digite el dia: ";
	cin>>kg_dn; cin>>kg_mn; cin>>kg_an;

	if(kg_da<kg_dn)
	{
		kg_da=kg_da+30;
		kg_ma=kg_ma-1;
		kg_d=kg_da-kg_dn;
	}
	else
	kg_d=kg_da-kg_dn;

	if(kg_ma<kg_mn)
	{
		kg_ma=kg_ma+12;
		kg_aa=kg_aa-1;
		kg_m=kg_ma-kg_mn;
	}
	else 
	kg_m=kg_ma-kg_mn;
	kg_e=kg_aa-kg_an;

	cout<<"El usuario tiene: "<<kg_e<<" años, "<<kg_m<<" meses y "<<kg_d<<" días"<<endl;

	return 0;
}