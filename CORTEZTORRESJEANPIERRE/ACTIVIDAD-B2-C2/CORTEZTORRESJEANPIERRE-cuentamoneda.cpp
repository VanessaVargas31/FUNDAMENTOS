#include<iostream>
using namespace std;

int main()
{
	int n, c=0, c1=0, c2=0;
	float x, a=0, a1=0, a2=0, m=0.10;
	cout<<"Ingrese la cantida de monedas: ";
	cin>>n;
	do{
	cout<<"Ingrese cual es el valor de la moneda (0.10,0.25) : ";
	cin>>x;
	c=c+1;
	a=a+x;
	if(x==m){
		c1=c1+1;
		a1=a1+x;
	}else{
		c2=c2+1;
		a2=a2+x;
	}
	}while(c<n);
	cout<<"El total de monedas fue : "<<endl;
	cout<<"Cantidad de monedas ingresadas : "<<c<<endl;
	cout<<"El total del dinero contado es de : "<<a<<endl;
	cout<<"Monedas ingresadas de 0.10 ctvos es de :"<<c1<<endl;
	cout<<"Cantidad total de monedas de 0.10 ctvos es de : "<<a1<<endl;
	cout<<"Monedas ingresadas de 0.25 ctvos es de : "<<c2<<endl;
	cout<<"Cantidad total de monedas de 0.25 ctvos es de : "<<a2<<endl;
	return (0);
}
