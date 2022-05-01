#include<iostream>
using namespace std;
int main ()
{
	int C=0, P;
	float A=0,X,Vb,Viva,Vdes,Iva=0.12,Descu=0.10,Vf;
	cout<<"Ingrese la cantidad de productos comprados: ";
	cin>>P;
	do{
	cout<<"Ingrese el valor de los productos comprados: ";
	cin>>X;
	C=C+1;
	A=A+X;
	Viva=A*Iva;
	cout<<"El valor del iva de la compra es de: $"<<Viva<<endl;
	Vdes=A*Descu;
	cout<<"El valor del descuento de la compra es de: $"<<Vdes<<endl;
	Vb=Viva+Vdes;
	}while(C<P);
	if(Vb==A){
	cout<<"La compra es beneficiaria para un descuento: "<<Vb<<endl;
	Iva=Vb*Viva/100;
	Descu=Vb*Vdes/100;
      }else{
	Vf=A+Viva-Vdes;
	cout<<"El valor final de su compra es de: $"<<Vf<<endl;
      }
	return(0);
}
