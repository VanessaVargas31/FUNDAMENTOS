#include<iostream>
using namespace std;
int main ()
{
	float A,B;
	cout<<"Ingrese el valor de  A:";cin>>A;
	cout<<"Ingrese el valor de  B:";cin>>B;
	if(A==B){
	cout<<"El valor de A: "<<A<<" es igual a B: "<<B<<endl;
	}else{
	if(A<B){
	cout<<"El valor de  A: "<<A<<" es menor que el valor de B: "<<B<<endl;
	}else{
	cout<<"El valor de B: "<<B<<" es menor que el valor de A: "<<A<<endl;
	}
	}
	return 0;
}
