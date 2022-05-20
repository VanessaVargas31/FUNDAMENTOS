/* 
   //=====Nombre del programa: Sumador de Variables
   //=====Archivo: Sumador.cpp
   //=====Autor: Arturo Kevin
   //=====Fecha de elaboración: 30-04-2022
   //=====Fecha de ultima actualización: 20-05-2022
*/
#include<iostream>
#include <stdio.h>

using namespace std;
int main ()
{
	float kg_x, kg_r, kg_s, kg_a;
	
	    cout<<"Nombre del programa: Sumador de Variables"<<endl;
        cout<<"Archivo: Sumador.cpp"<<endl;
        cout<<"Autor: Arturo Kevin"<<endl;
        cout<<"Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"Fecha de ultima actualización: 20-05-2022"<<endl;
        
    cout<<"\n\n_-_-_-_-_-_-_-_- Sumador de variables -_-_-_-_-_-_-_-_"<<endl;
	cout<<"Introduzca el numero de digitos a sumar: ";
	cin>>kg_r;
	for(kg_a=0;kg_a<kg_r;kg_a++)
	{
		cout<<"Digite el numero: ";
		cin>>kg_x;
		kg_s=kg_s+kg_x;
	}
	cout<<"La suma de los "<<kg_r<<" numeros es: "<<kg_s<<endl;
	return 0;
}
