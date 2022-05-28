#include <iostream>
using namespace std;
int main ()
{
    int kg_c=0, kg_P;
	float kg_A=0, kg_x, kg_Tb, kg_Piva, kg_Pdsc, kg_iva=0.12, kg_desc=0.30, kg_vt;
	
		cout<<"----------Punto De Venta----------"<<endl;
	cout<<"Ingrese la cantidad de productos: "; 
	cin>>kg_P;
		
		do{
		    cout<<"Ingrese el valor de los productos: ";
			cin>>kg_x;
			kg_c=kg_c+1;
			kg_A=kg_A+kg_x;
			kg_Piva=kg_A*kg_iva;
			cout<<"El valor del iva de la compra es de: $"<<kg_Piva<<endl;
			kg_Pdsc=kg_A*kg_desc;
			cout<<"El valor del descuento de su compra es de: $"<<kg_Pdsc<<endl;
			kg_Tb=kg_Piva+kg_Pdsc;
			}
		while(kg_c<kg_P);
		
		if (kg_Tb==kg_A)
		{
		    cout<<"Su compra aplica para un descuento:"<<kg_Tb<<endl;
			kg_iva=kg_Tb*kg_Piva/100;
			kg_desc=kg_Tb*kg_Pdsc/100;
		}
		else
		{
	        kg_vt=kg_A+kg_Piva-kg_Pdsc;
		    cout<<"El valor total es de: $"<<kg_vt<<endl;
		}
return(0);
}
