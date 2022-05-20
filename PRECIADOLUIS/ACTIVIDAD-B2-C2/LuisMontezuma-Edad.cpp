//================================================


//==> Nombre del programa: Calcular la edad
//==> Archivo : Edad.cpp
//==>Autor: Luis Montezuma
//==>Fecha de elaboración: 2022-01-10
//==>Fecha Última actualización: 2022-05- 15


//=================================================
#include <iostream>
using namespace std;
int main()
{
	int lm_diaA, lm_mesA, lm_anoA, lm_diaNa, lm_mesNa, lm_anoNa, lm_anoRes, lm_mesRes, lm_diaRes;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> lm_anoA;
	cout << "Ingrese Mes Actual: ";   cin >> lm_mesA;
	cout << "Ingrese Dia Actual: ";  cin >> lm_diaA;
	
	cout << "\nIngrese Año Nacimiento: ";  cin >> lm_anoNa;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> lm_mesNa;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> lm_diaNa;
						
	if (lm_anoA > lm_anoNa)
		{
			if(lm_mesA > lm_mesNa)	 
				{
					lm_anoRes=lm_anoA-lm_anoNa;	
					lm_mesRes=lm_mesA-lm_mesNa;					
				}
			else
				{
					lm_anoRes=lm_anoA-lm_anoNa-1;	
					lm_mesRes=(lm_mesA+12)-lm_mesNa;					
				}
				
										
			if(lm_diaA > lm_diaNa)
				{
								
					lm_diaRes=lm_diaA-lm_diaNa;
				}
			else
				{
					lm_mesRes=lm_mesRes-1;
					lm_diaRes=(lm_diaA+30)-lm_diaNa;
				}
							
			cout << "\nUSTED TIENE LA EDAD DE:\n ";
			cout << " Edad: " <<lm_anoRes<< endl;
			cout << " Mes: " <<lm_mesRes << endl;
			cout << " Dia: " << lm_diaRes << endl;
							
							
		}
	else
		{
			cout << "\n Calculo no es posible ";
		}
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Calcular la edad"<<endl;
	cout<<"//==> Archivo : Edad.cpp"<<endl;
	cout<<"//==>Autor: Luis Montezuma"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
}
