/* 
   //=====Nombre del programa: Comparador
   //=====Archivo: ArturoKevin-Compara.cpp
   //=====Autor: Arturo Kevin
   //=====Fecha de elaboración: 30-04-2022
   //=====Fecha de ultima actualización: 20-05-2022
*/
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    float kg_1, kg_2;

	cout<<"Nombre del programa: Comparador"<<endl;
    cout<<"Archivo: Comparador.cpp"<<endl;
    cout<<"Autor: Arturo Kevin"<<endl;
    cout<<"Fecha de elaboración: 30-04-2022"<<endl;
    cout<<"Fecha de ultima actualización: 20-05-2022"<<endl;
    
    //Inicio del programa
    cout<<"\n\n_-_-_-_-_-_-_-_- Comparador Numerico _-_-_-_-_-_-_-_-_-_-_-_-"<<endl;
    cout<<"Este programa compara 2 numeros que ingrese"<<endl;
  
    cout<<"\nIntroduzca el primer numero: ";
      cin>>kg_1;
  
    cout<<"\nIntroduzca el segundo numero: ";
	    cin>>kg_2;
  
    cout<<"===========================================================";
    if ( kg_1 > kg_2 )
        cout<<"\nEl numero "<<kg_1<< " es mayor a "<<kg_2<<endl;
    else

        if ( kg_1 < kg_2 )
           cout<<"\nEl numero "<<kg_2<< " es mayor a "<<kg_1<<endl;
        else
            cout<<"\nLos numeros ingresados ("<<kg_1<<" y "<<kg_2<<") son iguales"<<endl;
 
    getch(); /* Pausa */

    return 0;
}
