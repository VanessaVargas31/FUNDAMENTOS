/* 
   //=====Nombre del programa: Cuenta Monedas
   //=====Archivo: ArturoKevin-CuentaMonedas.cpp
   //=====Autor: Arturo Kevin
   //=====Fecha de elaboración: 30-04-2022
   //=====Fecha de ultima actualización: 20-05-2022
*/
#include<iostream>
using namespace std;

int main()
{
	    cout<<"Nombre del programa: Cuenta Moneda"<<endl;
        cout<<"Archivo: Alcancía.cpp"<<endl;
        cout<<"Autor: Arturo Kevin"<<endl;
        cout<<"Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"Fecha de ultima actualización: 20-05-2022"<<endl;
        
	int kg_n, kg_c=0, kg_c1=0, kg_c2=0;
	float kg_x, kg_a=0, kg_a1=0, kg_a2=0, kg_m=0.10;
	cout<<"\n\n_-_-_-_-_-_-_-_- Cuenta Monedas _-_-_-_-_-_-_-_-_-_-_-_-"<<endl;
	cout<<"Ingrese el numero de monedas: ";
	cin>>kg_n;
	do
	{
	    cout<<"Digite el valor de su moneda (0.10,0.25) : ";
	    cin>>kg_x;
    	kg_c=kg_c+1;
    	kg_a=kg_a+kg_x;
        if(kg_x==kg_m)
		    {
        		kg_c1=kg_c1+1;
	        	kg_a1=kg_a1+kg_x;
         	}
		else
			{
	    	    kg_a2=kg_a2+kg_x;
		    }
	}
	while(kg_c<kg_n);
    cout<<"\n==========================================="<<endl;
	cout<<"El total de monedas fue : "<<endl;
	cout<<"Cantidad de monedas ingresadas : "<<kg_c<<endl;
	cout<<"El total del dinero contado es de : "<<kg_a<<endl;
	cout<<"Monedas ingresadas de 0.10 ctvos es de :"<<kg_c1<<endl;
	cout<<"Cantidad total de monedas de 0.10 ctvos es de : "<<kg_a1<<endl;
	cout<<"Monedas ingresadas de 0.25 ctvos es de : "<<kg_c2<<endl;
	cout<<"Cantidad total de monedas de 0.25 ctvos es de : "<<kg_a2<<endl;


	return (0);

}
