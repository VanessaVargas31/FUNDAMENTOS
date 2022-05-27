// MENU DE Cortez Jean
//
//
//
//



int CortezJeansumadevariosnumeros()
{
	int ct_c=0,ct_n;
	float ct_x,ct_a=0;
	cout<<"\n SUMA DE VARIOS NUMERO "<<endl;
	cout<<"Ingrese ct_n: "; cin>>ct_n;
	do{
		cout<<"Ingrese ct_x: "; cin>>ct_x;
		ct_c=ct_c+1;
		ct_a=ct_a+ct_x;
	}while(ct_c<ct_n);



cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de dos numeros"<<endl;
cout<<"//==> Archivo : CortezJean-sumadevariosnumeros.cpp"<<endl;
cout<<"//==>Autor: Cortez Jean"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-30"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-17"<<endl;
cout<<"//================================================="<<endl;





	cout<<"la suma de= "<<ct_n<< "Numeros fue= : "<<ct_a<<endl;
  return 0;

}

int CortezJeancompara(){
	
float ct_A,ct_B;
	cout<<"INGRESE LOS VALORES A   B  \n";
	cin>>ct_A>>ct_B;
if(ct_A==ct_B){
	cout<<"el valor=" <<ct_A<< "es igual a=" <<ct_B;
}else{
	if(ct_A<ct_B){
		cout<<"el valor=" <<ct_A<<"es menor que=" <<ct_B;
}else{
	cout<<"el valor de=" <<ct_A<< "es mayor que=" <<ct_B;
}
}
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Compara de dos numeros"<<endl;
cout<<"//==> Archivo : CortezJean-compara.cpp"<<endl;
cout<<"//==>Autor: Cortez Jean"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-30"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-17"<<endl;        
cout<<"//================================================="<<endl;
return 0;
	
}

int CortezJeanpuntodeventa(){
	
int ct_c=0,ct_cp;
	float ct_vp, ct_a=0, ct_vb, ct_vIVA, ct_vdes, ct_vf, ct_IVA=0.12, ct_des=0.10;
        cout<<"Ingrese la cantidad de productos : "<<endl;
	cin>>ct_cp;
	do{
	cout<<"Ingrede el valor de cada producto : "<<endl;
        cin>>ct_vp;
	ct_c=ct_c+1;
	ct_a=ct_a+ct_vp;
	}while(ct_c<ct_cp);{
		ct_vb=ct_a;
	cout<<"El valor bruto es : "<<ct_vb<<endl;
		ct_vIVA=ct_vb*ct_IVA;
	cout<<"El valor del IVA es : "<<ct_vIVA<<endl;
		ct_vdes=ct_vb*ct_des;
	cout<<"El valor del descuento es : "<<ct_vdes<<endl;
		ct_vf=ct_vb+ct_vIVA-ct_vdes;
	cout<<"El valor final a pagar es : "<<ct_vf<<endl;
	}
	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
cout<<"//==> Archivo : CortezJean-puntodeventa.cpp"<<endl;
cout<<"//==>Autor: Cortez Jean"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-30"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-17"<<endl;        
cout<<"//================================================="<<endl;
return 0;
	
}

int CortezJeanedad(){
	
int ct_aa,ct_ma,ct_da,ct_an,ct_mn,ct_dn,ct_a,ct_m,ct_d;



cout<<"Ingrese la fecha actual (aaaa_mm_dd): "; 
cin>>ct_aa>>ct_ma>>ct_da;
cout<<"Ingrese la fecha de nacimiento (aaaa_mm_dd): "; 
cin>>ct_an>>ct_mn>>ct_dn;
if(ct_da>ct_dn)
{
	ct_d=ct_da-ct_dn;
}else{
	ct_da=ct_da+30;
	ct_ma=ct_ma-1;
	ct_d=ct_da-ct_dn;
}
if(ct_ma>ct_mn)
{
	ct_m=ct_ma-ct_mn;
}else{
	ct_ma=ct_ma+12;
	ct_aa=ct_aa-1;
	ct_m=ct_ma-ct_mn;
}

ct_a=ct_aa-ct_an;

cout<<"La persona tiene :"<<ct_a<<" años "<<ct_m<< " meses y  "<<ct_d<< " dias "<<endl;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Edad"<<endl;
cout<<"//==> Archivo : CortezJean-edad.cpp"<<endl;
cout<<"//==>Autor: Cortez Jean "<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-30"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-17"<<endl;        
cout<<"//================================================="<<endl;
return 0;


}

int CortezJeancuentamoneda(){
	
 int ct_cm, ct_c=0, ct_c1=0, ct_c2=0;
  float ct_vm, ct_a=0, ct_a1=0, ct_a2=0, ct_cstn=0.10;
	cout<<"Cantidad de monedas a ingresar : ";
	cin>>ct_cm;
	do{
		cout<<"Ingrese el valor de la moneda (0.10, o.25) : ";
		cin>>ct_vm;
		ct_c=ct_c+1;
		ct_a=ct_a+ct_vm;
		if(ct_vm==ct_cstn){
			ct_c1=ct_c1+1;
			ct_a1=ct_a1+ct_vm;
		}else{
			ct_c2=ct_c2+1;
			ct_a2=ct_a2+ct_vm;
		}
	}while(ct_c<ct_cm);
cout<<"El resultado fue : "<<endl;
cout<<"Cantidad de monedad ingresadas : "<<ct_c<<endl;
cout<<"Cantidad total de dinero ingresado : "<<ct_a<<endl;
cout<<"Cantidad de monedas de 0.10c ingresadas : "<<ct_c1<<endl;
cout<<"Cantidad total de dinero en monedas de 0.10c : "<<ct_a1<<endl;
cout<<"Cantidad de monedas de 0.25c ingresadas : "<<ct_c2<<endl;
cout<<"Cantidad total de dinero en monedas de 0.25c : "<<ct_a2<<endl;


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Cuenta monedas"<<endl;
cout<<"//==> Archivo : CortezJean-cuentamoneda.cpp"<<endl;
cout<<"//==>Autor: Cortez Jean "<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-30"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-17"<<endl;        
cout<<"//================================================="<<endl;
return 0;
	
}



int CortezJeanmenu()
{
	int op,flag2;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE Cortez Jean**************"<<endl<<endl;
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
					 CortezJeansumadevariosnumeros();			
					break;
				case 2:
					system("clear");
					cout<<"\nCOMPARA 2 NUIMEROS ";
					CortezJeancompara();
					break;
				case 3:
				        system("clear");
					cout<<"\n PUNTO DE VENTA ";
					CortezJeanpuntodeventa();
					break;
				case 4:
					system("clear");
					cout<<"\n CALCULA LA EDAD ";
					CortezJeanedad();
					break;
				case 5:
					system("clear");
					cout<<"\n MAQUINA CUENTA MONEDAS ";
					CortezJeancuentamoneda();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				                        flag2=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla

	}while(op!=0);
	
	cout<<"================================================\n";
        cout<<"                 Cortez Jean              \n";
        cout<<"           Gmail:sc834374@gmail.com  \n";
        cout<<"=================================================\n";
        cout<<"================================================\n";
	cout<<"                 Cortez Jean                    \n";
	cout<<" Gmail:jean.cortez.torres@utelvt.edu.ecu  \n";
	cout<<"=================================================\n";	
	


	return(0);

}
