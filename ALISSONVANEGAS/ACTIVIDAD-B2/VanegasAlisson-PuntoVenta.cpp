#include<iostream>
using namespace std;
int main()
{
	int c=0, P;
	float A=0,x,Tb,iva,desc,viva=0.12,vdesc=0.30,vt;
	cout<<"Ingrese la cantidad de productos: ";
	cin>>P;
	do{
	   cout<<"Ingrese el valor de los productos: ";
	   cin>>x;
	   c=c+1;
	   A=A+x;
	   iva=A*viva;
	   cout<<"El valor del iva de la compra es de: $"<<iva<<endl;
	   desc=A*vdesc;
	   cout<<"El valor del descuento de su compra es de:$"<<desc<<endl;
	   Tb=iva+desc;
	}while(c<P);
	if(Tb==A){
		cout<<"Su compra aplica para un descuento: "<<Tb<<endl;
	iva=Tb*iva/100;
	desc=Tb*desc/100;
	}else{
		vt=A+iva-desc;
		cout<<"El valor total es de:$ "<<vt<<endl;
	}
	return(0);
}
