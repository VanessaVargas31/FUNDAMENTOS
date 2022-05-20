/* 
   //=====Nombre del programa: Alcancía Mágica
   //=====Archivo: Alcancía.cpp
   //=====Autor: Arturo Kevin
   //=====Fecha de elaboración: 30-04-2022
   //=====Fecha de ultima actualización: 20-05-2022
*/
	
#include<iostream>
#include <stdio.h>

using namespace std;
int main ()
{
	char kg_1, kg_d;
	float kg_ca=0, kg_cb=0, kg_cc=0, kg_ra, kg_rb, kg_rc, kg_t;
	do
	{
	system("cls");
	fflush(stdin);
	    cout<<"Nombre del programa: Alcancía Mágica"<<endl;
        cout<<"Archivo: Alcancía.cpp"<<endl;
        cout<<"Autor: Arturo Kevin"<<endl;
        cout<<"Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"Fecha de ultima actualización: 20-05-2022"<<endl;
        
        cout<<"\n\n_-_-_-_-_-_-_-_- Alcancia Magica _-_-_-_-_-_-_-_-_-_-_-_-"<<endl;
	    cout<<"Ingrese su moneda con las siguientes opciones: "<<endl;
	    cout<<"a) 10ctv"<<endl;
	    cout<<"b) 25ctv"<<endl;
	    cout<<"c) 50ctv"<<endl;
	    cout<<"\n"; cin>>kg_1;
	if(kg_1=='a'||kg_1=='A'){kg_ca=kg_ca+1;}
	if(kg_1=='b'||kg_1=='B'){kg_cb=kg_cb+1;}
	if(kg_1=='c'||kg_1=='C'){kg_cc=kg_cc+1;}
	
	    cout<<"\n//Desea agregar otra moneda?"<<endl;
	    cout<<"Si: R   No: F"<<endl;
	    cin>>kg_d;

	} 
	while(kg_d=='r'||kg_d=='R');
	{
	
	    kg_ra=kg_ca*0.10;
	    kg_rb=kg_cb*0.25;
	    kg_rc=kg_cc*0.50;
	    kg_t=kg_ra+kg_rb+kg_rc;
	    cout<<"Tiene "<<kg_ca<<" monedas de 10 equivanente a: "<<kg_ra<<" dolares."<<endl;
	    cout<<"Tiene "<<kg_cb<<" monedas de 25 equivanente a: "<<kg_rb<<" dolares."<<endl;
	    cout<<"Tiene "<<kg_cc<<" monedas de 50 equivanente a: "<<kg_rc<<" dolares."<<endl;
    	cout<<"\n==========================================="<<endl;
    	cout<<"Usted tiene un total de: "<<kg_t<<" dolares."<<endl;
	}
	return 0;
}
