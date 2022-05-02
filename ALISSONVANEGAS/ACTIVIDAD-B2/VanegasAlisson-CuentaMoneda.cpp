#include<iostream>
using namespace std;
int main()
{ 
	int n, c=0, c1=0, c2=0;
	float x,a=0, a1=0, a2=0;
	cout<<"¿Cuantas monedas va a inggresar?: ";
	cin>>n;
	do{
	cout<<"Ingrese el valor de la moneda (0.10, 0.25): ";
	cin>>x;
	c=c+1;
	a=a+x;
	if(x==0.10){

		c1=c1+1;
		a1=a1+x;
	}else{
		c2=c2+1;
		a2=a2+x;
	}
	}while(c<n);
	cout<<"El resultado es :"<<endl;
	cout<<"Cantidad de monedas ingresadas :"<<c<<endl;
	cout<<"Total del dinero contado :"<<a<<endl;
	cout<<"Cantidad de monedas ingresadas de 0.10ctv :"<<c1<<endl;
	cout<<"Total del dinero de monedas de 0.10ctv :"<<a1<<endl;
	cout<<"Cantidad de monedas ingresadas de 0.25ctv :"<<c2<<endl;
	cout<<"Total del dinero de monedas de 0.25cvt :"<<a2<<endl;
	return(0);
}
