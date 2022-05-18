#include<iostream>
using namespace std;
int main()
{
	int c=0, n;
	float s=0, x;
	cout<<"Ingrese las cantidades de numeros que desea sumar: ";
	cin>>n;
	do{

		cout<<"Ingrese un numero: ";
		cin>>x;
		c=c+1;
		s=s+x;
	}while(c<n);
	cout<<"La suma de los numeros es: "<<s<<endl;
	return (0);
}

