#include<iostream>
using namespace std;
int main()
{
	int da,ma,aa,dn,mn,an,a,m,d;
	cout<<"Ingrese la fecha actual: Dia Mes Año :";
	cin>>da>>ma>>aa;
	cout<<"Ingrese su fecha de nacimiento: Dia Mes Año :";
	cin>>dn>>mn>>an;
	if(da<dn){
	 da=da+30;
	 ma=ma-1;
	 d=da-dn;
 }
	else{
		d=da-dn;
	}
	if(ma<mn){
		ma=ma+12;
		aa=aa-1;
		m=ma-mn;
	}
	else{ 
		m=ma-mn;
	}
	a=aa-an;
	     cout<<"Usted tiene: " <<a<< "años" <<m<< "meses" <<d<< "y" <<d<< "dias"<<endl;
       return (0);
}

