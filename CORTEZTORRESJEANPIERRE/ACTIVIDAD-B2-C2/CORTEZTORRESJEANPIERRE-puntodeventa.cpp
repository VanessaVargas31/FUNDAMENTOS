
//==================================================
//==>Nombre del programa: puntodeventa
//==>Autor: CORTEZ TORRES JEAN PIERRE
//==> Archivo: CORTEZTORRESJEANPIERRE-puntodeventa.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//==================================================

#include <iostream>
using namespace std;
int main ()
{
int ct_c=0, ct_P;
float ct_A=0, ct_x, ct_Tb, ct_Piva, ct_Pdsc, ct_iva=0.12, ct_desc=0.30, ct_vt;
cout<<"Ingrese la cantidad de productos: "; 
cin>>ct_P;
do{
cout<<"Ingrese el valor de los productos: ";
cin>>ct_x;
ct_c=ct_c+1;
ct_A=ct_A+ct_x;
ct_Piva=ct_A*ct_iva;
cout<<"El valor del iva de la compra es de: $"<<ct_Piva<<endl;
ct_Pdsc=ct_A*ct_desc;
cout<<"El valor del descuento de su compra es de: $"<<ct_Pdsc<<endl;
ct_Tb=ct_Piva+ct_Pdsc;
}while (ct_c<ct_P);
if (ct_Tb==ct_A){
cout<<"Su compra aplica para un descuento:"<<ct_Tb<<endl;
ct_iva=ct_Tb*ct_Piva/100;
ct_desc=ct_Tb*ct_Pdsc/100;
}else{
ct_vt=ct_A+ct_Piva-ct_Pdsc;
//==================================================
//==>Nombre del programa: puntodeventa
//==>Autor: CORTEZ TORRES JEAN PIERRE
//==> Archivo: CORTEZTORRESJEANPIERRE-puntodeventa.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//==================================================
cout<<"El valor total es de: $"<<ct_vt<<endl;
}
return(0);
}

