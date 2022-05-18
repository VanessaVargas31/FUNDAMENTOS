#include <iostream>
using namespace std;
int main()
{
	int diaA, mesA, anoA, diaNa, mesNa, anoNa, anoRes, mesRes, diaRes;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> anoA;
	cout << "Ingrese Mes Actual: ";   cin >> mesA;
	cout << "Ingrese Dia Actual: ";  cin >> diaA;
	
	cout << "\nIngrese Año Nacimiento: ";  cin >> anoNa;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> mesNa;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> diaNa;
						
	if (anoA > anoNa)
		{
			if(mesA > mesNa)	 
				{
					anoRes=anoA-anoNa;	
					mesRes=mesA-mesNa;					
				}
			else
				{
					anoRes=anoA-anoNa-1;	
					mesRes=(mesA+12)-mesNa;					
				}
				
										
			if(diaA > diaNa)
				{
								
					diaRes=diaA-diaNa;
				}
			else
				{
					mesRes=mesRes-1;
					diaRes=(diaA+30)-diaNa;
				}
							
			cout << "\nUSTED TIENE LA EDAD DE:\n ";
			cout << " Edad: " <<anoRes<< endl;
			cout << " Mes: " <<mesRes << endl;
			cout << " Dia: " << diaRes << endl;
							
							
		}
	else
		{
			cout << "\n Calculo no es posible ";
		}
}
