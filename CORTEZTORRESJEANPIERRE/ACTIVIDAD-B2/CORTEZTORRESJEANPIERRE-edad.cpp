#include<iostream>
using namespace std;

int main ()
{
	int AA,MA,DA,AN,MN,DN,A,M,D;
	cout<<"Ingrese la fecha actual (AAAA MM DD): ";
	cin>>AA>>MA>>DA;
	cout<<"Ingrese su fecha de nacimiento (AAAA MM DD): ";
	cin>>AN>>MN>>DN;
	if(DA>=DN){
	D=DA-DN;
	}else{
	DN=DN+30;
	MA=MA-1;
	D=DA-DN;
	}
	if(MA>=MN){
	M=MA-MN;
	}else{
	MN=MN+12;
	AA=AA-1;
	M=MA-MN;
	}
	A=AA-AN;
	cout<<"Usted tiene "<<A<<" años "<<M<<" meses  y"<<D<<" dias ";
	return(0);
}
