/* 
   //=====Nombre del programa: Calculo de precios
   //=====Archivo: Tienda.cpp
   //=====Autor: Arturo Kevin
   //=====Fecha de elaboración: 30-04-2022
   //=====Fecha de ultima actualización: 20-05-2022
*/
#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
	float kg_x, kg_p, kg_sb, kg_a, kg_i, kg_iva, kg_ivaf, kg_d, kg_df, kg_dt, kg_v;
	
	    cout<<"Nombre del programa: Calculo de precios"<<endl;
        cout<<"Archivo: Tiendar.cpp"<<endl;
        cout<<"Autor: Arturo Kevin"<<endl;
        cout<<"Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"Fecha de ultima actualización: 20-05-2022"<<endl;
	
	cout<<"\n\n_-_-_-_-_-_-_-_- Calculo de precios -_-_-_-_-_-_-_-_"<<endl;
	cout<<"Introduzca el numero de productos a llevar: ";
	cin>>kg_p;
	for(kg_a=0;kg_a<kg_p;kg_a++)
	{
	    cout<<"Digite el precio del producto: ";
	    cin>>kg_x;
	    kg_sb=kg_sb+kg_x;
	}
	cout<<"Digite el porcentaje de IVA: ";
	
	//Calculo del IVA e IVA Total
	    cin>>kg_i;
	    kg_iva=kg_i/100;
    	kg_ivaf=kg_iva*kg_sb;
	
	cout<<"Escriba el escuento: ";
	
	//Calculo de Descuento y Descuento Total
	    cin>>kg_d;
	    kg_df=kg_d/100;
	    kg_dt=kg_df*kg_sb;
	    kg_v=kg_ivaf+kg_sb-kg_dt;
	    
	cout<<"-------------------------------"<<endl;
	cout<<"---------Resultado------------"<<endl;
	cout<<"El subtotal es: "<<kg_sb<<endl;;
	cout<<"El "<<kg_i<<"% de IVA es: "<<kg_ivaf<<endl;
	cout<<"El "<<kg_d<<"% de descuento es: "<<kg_dt<<endl;
	cout<<"El valor total a pagar es de: "<<kg_v<<endl;
	
	return 0;
}
