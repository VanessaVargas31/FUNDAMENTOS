//
// FUNCIONES IMPLEMENTADAS POR LUIS PRECIADO
//
int LM_Suma()
{
	int LM_ax, LM_bx, LM_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>LM_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>LM_bx;
	LM_cx = LM_ax+LM_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<LM_ax<<" + "<<LM_bx<<" es igual a: "<<LM_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : suma.cpp"<<endl;
	cout<<"//==>Autor: Luis Montezuma"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int LM_CuentaMoneda()
{
	int LM_n, LM_c=0, LM_c1=0, LM_c2=0, LM_cl, LM_cz;
	float LM_x, LM_al, LM_a=0, LM_a1=0, LM_a2=0, LM_az;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>LM_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>LM_x;
		LM_c = LM_c+1;
		LM_a = LM_a+LM_x;
		if(LM_x==0.25)
			{
				LM_c1 = LM_c1+1;
				LM_a1 = LM_x+LM_a1;
			}
		else
			{
				LM_c2 = LM_c2+1;
				LM_a2 = LM_a2+LM_x;
			}
	}
	while(LM_c<LM_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<LM_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<LM_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<LM_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<LM_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<LM_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<LM_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Luis Montezuma"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int LM_PuntoVenta()
{
	float LM_xx, LM_cc=0, LM_at=0, LM_nn, LM_vb, LM_viva, LM_vdes, LM_vfi, LM_vft;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> LM_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<LM_cc+1 <<": " ;   cin>> LM_xx;
		LM_cc = LM_cc+1;
		LM_at = LM_at+LM_xx;
	}
	while(LM_cc<LM_nn);			
	LM_vb = LM_at;
	LM_viva = LM_vb*0.12;
	LM_vdes = LM_vb*0.10;
	LM_vfi = LM_vb+LM_viva;
	LM_vft = LM_vfi-LM_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<LM_vfi<<endl;
	cout<<"Valor final es: "<<LM_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Control de ventas"<<endl;
	cout<<"//==> Archivo : puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Luis Montezuma"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int LM_Edad()
{
	int LM_diaAct, LM_mesAct, LM_anoAct, LM_diaNac, LM_mesNac, LM_anoNac, LM_anoR, LM_mesR, LM_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> LM_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> LM_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> LM_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> LM_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> LM_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> LM_diaNac;			
	if (LM_anoAct > LM_anoNac)
	{
		if(LM_mesAct > LM_mesNac)	 
		{
			LM_anoR=LM_anoAct-LM_anoNac;	
			LM_mesR=LM_mesAct-LM_mesNac;					
		}
		else
		{
			LM_anoR=LM_anoAct-LM_anoNac-1;	
			LM_mesR=(LM_mesAct+12)-LM_mesNac;					
		}												
		if(LM_diaAct > LM_diaNac)
		{				
			LM_diaR=LM_diaAct-LM_diaNac;
		}
		else
		{
			LM_mesR=LM_mesR-1;
			LM_diaR=(LM_diaAct+30)-LM_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<LM_anoR<< endl;
		cout << " Mes: " <<LM_mesR << endl;
		cout << " Dia: " << LM_diaR << endl;								
	}
	else
	{
		cout << "\n Calculo no es posible ";
	}
	return 0;
}

int LM_Compara()
{
	int LM_aa, LM_bb ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> LM_aa;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> LM_bb;
	if (LM_aa==LM_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (LM_aa>LM_bb)
		{
		cout<<LM_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<LM_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparación"<<endl;
	cout<<"//==> Archivo : compara.cpp"<<endl;
	cout<<"//==>Autor: Luis Montezuma"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int LM_Menu()
{
	int opp, flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\t\t\t----------FUNDAMENTOS DE PROGRAMACI?N-----------"<<endl;
		cout<<"\t\t\t-----PROGRAMA REALIZADO POR MONTEZUMA LUIS-----"<<endl;
		cout<<"\t\t\t----------------MENÚ DE OPCIONES----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. CONTADOR DE MONEDAS"<<endl;
		cout<<"2. SUMA DE 2 NUMEROS"<<endl;
		cout<<"3. COMPARACION DE 2 NUMEROS"<<endl;
		cout<<"4. CALCULADORA DE EDAD"<<endl;
		cout<<"5. CONTROL DE VENTAS"<<endl;
		cout<<"0. REGRESAR AL MENÚ PRINCIPAL"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>opp;
		switch(opp)
		{
			case 1:
				system("cls");
				LM_CuentaMoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				LM_Suma();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				LM_Compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				LM_Edad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				LM_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			if(opp!=0 && opp>0)
			{
				cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
			}		  
			if(opp==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				flag=cin.ignore().get();
				cout<<flag<<endl;
				
		}
	}
	while(opp != 0);
	return 0;
}
