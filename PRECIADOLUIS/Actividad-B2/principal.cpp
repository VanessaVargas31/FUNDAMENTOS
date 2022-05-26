#include<iostream>
#include<stdlib.h>
using namespace std;
#include"LM_FUCTIONS.h"



int main()
{
   
	int op,flag2;

	do{
			system("clear");
			cout<<"**************BIENVENIDO A NUESTRO MENU DE PROGAMAS C++**************"<<endl<<endl;
			cout<<"1.- Trabajos de VARGAS VANESSA \n";
			cout<<"2.- Trabajos de CORTEZ JEAN\n";
			cout<<"3.- Trabajos de  VANEGAS ALISSON\n"; 
			cout<<"4.- Trabajos de PRECIADO LUIS \n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE VARGAS VANESSA  "<<endl;
								
					break;
				case 2:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE Cortez Jean   ";
		
					break;
				case 3:
					
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE  ";
					
					break;
				case 4:
				    LM_Menu();
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE  ";
				
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}           flag2=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla

				   
	}while(op!=0);
	
         cout<<endl<<"// Autores: VARGAS VANESSA, CORTEZ JEAN    \n";
	 cout<<"=================================================================================\n";
         cout<<"//                     Fecha de creación: 2022-05-12                             \n";
	 cout<<"//===============================================================================\n";
         cout<<"//                 Fecha de ultima actualizacion: 2022-05-22                     \n";
	 cout<<"//===============================================================================\n";
         
	return(0);

}
