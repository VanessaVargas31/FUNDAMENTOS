#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"Ingrese a:";
        cin>>a;
	cout<<"Ingrese b:";
        cin>>b;
	if(a==b) {
cout<<"El valor de a= "<<a<<" es igual a b "<<b<<endl;

	}else{
		if(a<b){
	cout<<"El valor de a" <<a<<" es menor a b="<<b<<endl;
		}else{
	cout<<"El valor de b="<<b<<" es menor a a="<<a<<endl;
		}
	}
	return 0;

}
