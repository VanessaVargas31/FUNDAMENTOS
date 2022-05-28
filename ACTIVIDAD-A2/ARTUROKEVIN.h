//Funciones de Arturo Guerrero
int AK_compara()
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

    return 0;
}
int AK_cuentamoneda()
{
	int kg_n, kg_c=0, kg_c1=0, kg_c2=0;
	float kg_x, kg_a=0, kg_a1=0, kg_a2=0, kg_m=0.10;
	
	    cout<<"Nombre del programa: Cuenta Moneda"<<endl;
        cout<<"Archivo: Alcancía.cpp"<<endl;
        cout<<"Autor: Arturo Kevin"<<endl;
        cout<<"Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"Fecha de ultima actualización: 20-05-2022"<<endl;
        
	cout<<"\n\n_-_-_-_-_-_-_-_- Cuenta Monedas _-_-_-_-_-_-_-_-_-_-_-_-"<<endl;
	cout<<"Ingrese el numero de monedas: ";
	cin>>kg_n;
	do
	{
	    cout<<"Digite el valor de su moneda (0.10,0.25) : ";
	    cin>>kg_x;
    	kg_c=kg_c+1;
    	kg_a=kg_a+kg_x;
        if(kg_x==kg_m)
		    {
        		kg_c1=kg_c1+1;
	        	kg_a1=kg_a1+kg_x;
         	}
		else
			{
	    	    kg_a2=kg_a2+kg_x;
		    }
	}
	while(kg_c<kg_n);
    cout<<"\n==========================================="<<endl;
	cout<<"El total de monedas fue : "<<endl;
	cout<<"Cantidad de monedas ingresadas : "<<kg_c<<endl;
	cout<<"El total del dinero contado es de : "<<kg_a<<endl;
	cout<<"Monedas ingresadas de 0.10 ctvos es de :"<<kg_c1<<endl;
	cout<<"Cantidad total de monedas de 0.10 ctvos es de : "<<kg_a1<<endl;
	cout<<"Monedas ingresadas de 0.25 ctvos es de : "<<kg_c2<<endl;
	cout<<"Cantidad total de monedas de 0.25 ctvos es de : "<<kg_a2<<endl;


	return (0);
}
int AK_laedad()
{
	int kg_da, kg_ma, kg_aa, kg_dn, kg_mn, kg_an, kg_e, kg_m, kg_d;
	    
		cout<<"Nombre del programa: Determinador de Edad"<<endl;
        cout<<"Archivo: Edad.cpp"<<endl;
        cout<<"Autor: Arturo Kevin"<<endl;
        cout<<"Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"Fecha de ultima actualización: 20-05-2022"<<endl;
        
	cout<<"\n\n_-_-_-_-_-_-_-_- Calculadora de Edad -_-_-_-_-_-_-_-_"<<endl;
	cout<<"Porfavor digite la fecha actual con el siguiente formato Fecha/Mes/Año: "<<endl;
	
	cin>>kg_da; cin>>kg_ma; cin>>kg_aa;
	cout<<"------------------------------------------"<<endl;
	
	cout<<"Porfavor, digite la fecha de su nacimiento con el siguiente formato Fecha/Mes/Año"<<endl;
	cout<<"Digite el dia: ";
	cin>>kg_dn; cin>>kg_mn; cin>>kg_an;

	if(kg_da<kg_dn)
	{
		kg_da=kg_da+30;
		kg_ma=kg_ma-1;
		kg_d=kg_da-kg_dn;
	}
	else
	kg_d=kg_da-kg_dn;

	if(kg_ma<kg_mn)
	{
		kg_ma=kg_ma+12;
		kg_aa=kg_aa-1;
		kg_m=kg_ma-kg_mn;
	}
	else 
	kg_m=kg_ma-kg_mn;
	kg_e=kg_aa-kg_an;

	cout<<"El usuario tiene: "<<kg_e<<" años, "<<kg_m<<" meses y "<<kg_d<<" días"<<endl;

	return 0;
}
int AK_PuntoVenta()
{
	int kg_c=0, kg_P;
	float kg_A=0, kg_x, kg_Tb, kg_Piva, kg_Pdsc, kg_iva=0.12, kg_desc=0.30, kg_vt;
	
		cout<<"----------Punto De Venta----------"<<endl;
	cout<<"Ingrese la cantidad de productos: "; 
	cin>>kg_P;
		
		do{
		    cout<<"Ingrese el valor de los productos: ";
			cin>>kg_x;
			kg_c=kg_c+1;
			kg_A=kg_A+kg_x;
			kg_Piva=kg_A*kg_iva;
			cout<<"El valor del iva de la compra es de: $"<<kg_Piva<<endl;
			kg_Pdsc=kg_A*kg_desc;
			cout<<"El valor del descuento de su compra es de: $"<<kg_Pdsc<<endl;
			kg_Tb=kg_Piva+kg_Pdsc;
			}
		while(kg_c<kg_P);
		
		if (kg_Tb==kg_A)
		{
		    cout<<"Su compra aplica para un descuento:"<<kg_Tb<<endl;
			kg_iva=kg_Tb*kg_Piva/100;
			kg_desc=kg_Tb*kg_Pdsc/100;
		}
		else
		{
	        kg_vt=kg_A+kg_Piva-kg_Pdsc;
		    cout<<"El valor total es de: $"<<kg_vt<<endl;
		}
return(0);
}
int AK_Suma()
{
	float kg_x, kg_r, kg_s, kg_a;
	
	    cout<<"Nombre del programa: Sumador de Variables"<<endl;
        cout<<"Archivo: Sumador.cpp"<<endl;
        cout<<"Autor: Arturo Kevin"<<endl;
        cout<<"Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"Fecha de ultima actualización: 20-05-2022"<<endl;

    cout<<"\n\n_-_-_-_-_-_-_-_- Sumador de variables -_-_-_-_-_-_-_-_"<<endl;
	cout<<"Introduzca el numero de digitos a sumar: ";
	cin>>kg_r;
	do
	{
		cout<<"Ingrese el numero: ";
		cin>>kg_x;
		kg_a=kg_a+1;
		kg_s=kg_s+kg_x;
		
	}while(kg_a<kg_r);
	cout<<"La suma de los "<<kg_r<<" numeros es: "<<kg_s<<endl;
	return 0;
}
int AK_Menu()
{
	int opcion, flag;
	do
	{
		system("cls");
		menu:
		
		cout<<"\t\t\t_-_-_Fundamentos de Programacion-_-_-"<<endl;
		cout<<"\t\t\t_--_-_-_-_Menu De Programas-_-_-_-_-_"<<endl;
		cout<<"\t\t\t_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
		cout<<"1. COMPADOR DE NUMEROS"<<endl;
		cout<<"2. CONTABILIZADOR DE MONEDAS"<<endl;
		cout<<"3. CALCULADOR DE EDAD"<<endl;
		cout<<"4. PUNTO DE VENTA"<<endl;
		cout<<"5. SUMADOR DE VARIOS NUMEROS"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"INGRESE UNA OPCION: "; 
		
		cout<<"\n\n\n\t\t\t======================================"<<endl;
		cout<<"\t\t\t===       Datos del creador        ==="<<endl;
		cout<<"\t\t\t===      Autor: ARTURO KEVIN       ==="<<endl;
		cout<<"\t\t\t=== Correo: arturokevind@gmail.com ==="<<endl;
		cout<<"\t\t\t======================================"<<endl;
		cin>>opcion;
		
		
		
		
			
		switch (opcion)
		{
			
			case 1:
				system("cls");
				AK_compara();
				cout<<"Para regresar al menu (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				AK_cuentamoneda();
				cout<<"Para regresar al menu (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				AK_laedad();
				cout<<"Para regresar al menu (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				AK_PuntoVenta();
				cout<<"Para regresar al menu (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				AK_Suma();
				cout<<"Para regresar al menu (presiona ENTER) : ";
				system("pause>null");
			break;
			if(opcion!=0 && opcion>0)
			{
				cout << "\nOpcion no permitida !\n" <<  "Presiona ENTER para continuar\n";	    
			}		  
			if(opcion==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				flag=cin.ignore().get();
				cout<<flag<<endl;
		}
	}
	while(opcion != 0);
	return(0);
}