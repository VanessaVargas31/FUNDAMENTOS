// MENU DE VARGAS VANESSA
//
//
//
//
//
//
//


int VARGASVANESSASumadevariosnumeros()
{
int VV_c=0, VV_n;
	float VV_s=0, VV_x;
	cout<<"Ingrese las cantidades de numeros que desea sumar: ";
	cin>>VV_n;
	do{

		cout<<"Ingrese un numero: ";
		cin>>VV_x;
		VV_c=VV_c+1;
		VV_s=VV_s+VV_x;
	}while(VV_c<VV_n);



	cout<<endl<<"//==============================================================="<<endl;
	cout<<"//===>Nombre del programa: Suma de varios numero"<<endl;
	cout<<"//===>Archivo: VARGASVANESScout-Sumadevariosnumeros.cpp"<<endl;
	cout<<"//===>Autora: Vargas Vanessa"<<endl;
	cout<<"//===>Fecha de elaboración: 30-04-2022"<<endl;
	cout<<"//===>Fecha de ultima actualización: 18-05-2022"<<endl;
	cout<<"//===================================================================="<<endl;





	cout<<"La suma de los numeros es: "<<VV_s<<endl;
	return (0);

}

int VARGASVANESSACompara(){
	
float VV_A,VV_B;
	cout<<"Ingrese el valor de  VV_A:";cin>>VV_A;
	cout<<"Ingrese el valor de  VV_B:";cin>>VV_B;
	if(VV_A==VV_B){
	cout<<"El valor de VV_A: "<<VV_A<<" es igual a VV_B: "<<VV_B<<endl;
	}else{
	if(VV_A<VV_B){
	
	
        cout<<endl<<"//====================================================================="<<endl;
        cout<<"//=====Nombre del programa: compara "<<endl;
        cout<<"//=====Archivo: VARGASVANESSA-Compara.cpp"<<endl;
        cout<<"//=====Autora: VARGAS VANESSA "<<endl;
        cout<<"//=====Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"//=====Fecha de ultima actualización: 18-05-2022"<<endl;
        cout<<"//====================================================================="<<endl;

	





	cout<<"El valor de  VV_A: "<<VV_A<<" es menor que el valor de VV_B: "<<VV_B<<endl;
	}else{
	cout<<"El valor de VV_B: "<<VV_B<<" es menor que el valor de VV_A: "<<VV_A<<endl;
	}
	}
	return 0;
	
}

int VARGASVANESSAPuntoVenta(){
int VV_C=0, VV_P;
	float VV_A=0,VV_X,VV_Vb,VV_Viva,VV_Vdes,VV_Iva=0.12,VV_Descu=0.10,VV_Vf;
	cout<<"Ingrese la cantidad de productos comprados: ";
	cin>>VV_P;
	do{
	cout<<"Ingrese el valor de los productos comprados: ";
	cin>>VV_X;
	VV_C=VV_C+1;
	VV_A=VV_A+VV_X;
	VV_Viva=VV_A*VV_Iva;
	cout<<"El valor del iva de la compra es de: $"<<VV_Viva<<endl;
	VV_Vdes=VV_A*VV_Descu;
	cout<<"El valor del descuento de la compra es de: $"<<VV_Vdes<<endl;
	VV_Vb=VV_Viva+VV_Vdes;
	}while(VV_C<VV_P);
	if(VV_Vb==VV_A){
	cout<<"La compra es beneficiaria para un descuento: "<<VV_Vb<<endl;
	VV_Iva=VV_Vb*VV_Viva/100;
	VV_Descu=VV_Vb*VV_Vdes/100;
      }else{
	VV_Vf=VV_A+VV_Viva-VV_Vdes;



	cout<<endl<<"//====================================================================="<<endl;
	cout<<"//===>Nombre del programa: Punto de Venta"<<endl;
	cout<<"//===>Archivo: VARGASVANESSA-PuntoVenta.cpp"<<endl;
	cout<<"//===>Autora: Vargas Vanessa"<<endl;
	cout<<"//===>Fecha de elaboración: 30-04-2022"<<endl;
	cout<<"//===>Fecha de ultima actualización: 18-05-2022"<<endl;
	cout<<"//==========================================================================="<<endl;






	cout<<"El valor final de su compra es de: $"<<VV_Vf<<endl;
      }
	return(0);	

	
}

int VARGASVANESSALaedad(){
	
int VV_AA,VV_MA,VV_DA,VV_AN,VV_MN,VV_DN,VV_A,VV_M,VV_D;
	cout<<"Ingrese la fecha actual (VV_AAAA VV_MM VV_DD): ";
	cin>>VV_AA>>VV_MA>>VV_DA;
	cout<<"Ingrese su fecha de nacimiento (VV_AAAA VV_MM VV_DD): ";
	cin>>VV_AN>>VV_MN>>VV_DN;
	if(VV_DA>=VV_DN){
	VV_D=VV_DA-VV_DN;
	}else{
	VV_DN=VV_DN+30;
	VV_MA=VV_MA-1;
	VV_D=VV_DA-VV_DN;
	}
	if(VV_MA>=VV_MN){
	VV_M=VV_MA-VV_MN;
	}else{
	VV_MN=VV_MN+12;
	VV_AA=VV_AA-1;
	VV_M=VV_MA-VV_MN;
	}
	VV_A=VV_AA-VV_AN;




	cout<<"Usted tiene "<<VV_A<<" años "<<VV_M<<" meses  y"<<VV_D<<" dias ";



	cout<<endl<<"//===================================================================="<<endl;
	cout<<"//===>Nombre del programa: La edad"<<endl;
	cout<<"//===>Archivo: VARGASVANESSA-PuntoVenta.cpp"<<endl;
	cout<<"//===>Autora: Vargas Vanessa"<<endl;
	cout<<"//===>Fecha de elaboración: 30-04-2022"<<endl;
	cout<<"//===>Fecha de ultima actualización: 18-05-2022"<<endl;
	cout<<"//=========================================================================="<<endl;

	return(0);


}

int VARGASVANESSACuentaMoneda(){
	int VV_n, VV_c=0, VV_c1=0, VV_c2=0;
	float VV_x, VV_a=0, VV_a1=0, VV_a2=0, VV_m=0.10;
	cout<<"Ingrese la cantida de monedas: ";
	cin>>VV_n;
	do{
	cout<<"Ingrese cual es el valor de la moneda (0.10,0.25) : ";
	cin>>VV_x;
	VV_c=VV_c+1;
	VV_a=VV_a+VV_x;
	if(VV_x==VV_m){
		VV_c1=VV_c1+1;
		VV_a1=VV_a1+VV_x;
	}else{
		VV_c2=VV_c2+1;
		VV_a2=VV_a2+VV_x;
	}
	}while(VV_c<VV_n);





	cout<<endl<<"//====================================================================="<<endl;
	cout<<"//===>Nombre del programa: Cuenta Moneda"<<endl;
	cout<<"//===>Archivo: VARGASVANESSA-CuentaMoneda.cpp"<<endl;
	cout<<"//===>Autora: Vargas Vanessa"<<endl;
	cout<<"//===>Fecha de elaboración: 30-04-2022"<<endl;
	cout<<"//===>Fecha de ultima actualización: 18-05-2022"<<endl;
	cout<<"//==========================================================================="<<endl;

	cout<<"El total de monedas fue : "<<endl;
        cout<<"Cantidad de monedas ingresadas : "<<VV_c<<endl;
        cout<<"El total del dinero contado es de : "<<VV_a<<endl;
        cout<<"Monedas ingresadas de 0.10 ctvos es de :"<<VV_c1<<endl;
        cout<<"Cantidad total de monedas de 0.10 ctvos es de : "<<VV_a1<<endl;
        cout<<"Monedas ingresadas de 0.25 ctvos es de : "<<VV_c2<<endl;
        cout<<"Cantidad total de monedas de 0.25 ctvos es de : "<<VV_a2<<endl;


	return (0);
 
}



int VARGASVANESSAmenu()
{
	int op,flag5;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE VARGAS VANESSA **************"<<endl<<endl;
			cout<<"1.- SUMA VARIOS NUMEROS \n";
			cout<<"2.- COMPARA 2 NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n"; 
			cout<<"4.- CALCULA EDAD. \n";
			cout<<"5.- MAQUINA CUENTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					cout<<"\n SUMA VARIOS NUMEROS  "<<endl;
					 VARGASVANESSASumadevariosnumeros();			
					break;
				case 2:
					system("clear");
					cout<<"\nCOMPARA 2 NUMEROS ";
					VARGASVANESSACompara();
					break;
				case 3:
				        system("clear");
					cout<<"\n PUNTO DE VENTA ";
					VARGASVANESSAPuntoVenta();
					break;
				case 4:
					system("clear");
					cout<<"\n CALCULA LA EDAD ";
					VARGASVANESSALaedad();
					break;
				case 5:
					system("clear");
					cout<<"\n MAQUINA CUENTA MONEDAS ";
					VARGASVANESSACuentaMoneda();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				                        flag5=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla

	}while(op!=0);
	
	cout<<"================================================\n";
	cout<<"                 VARGAS VANESSA               \n";
	cout<<" Gmail:roshiitoral312@gmail.com  \n";
	cout<<"=================================================\n";

	return(0);

}
