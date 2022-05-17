//==================================================
//==>Nombre del programa: sumadevariosnumeros
//==>Autor: CORTEZ TORRES JEAN PIERRE
//==> Archivo: CORTEZTORRESJEANPIERRE-sumadevariosnumeros.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//==================================================
#include <iostream>

using namespace std;

int main()
{
    int ct_c=0,ct_n;
    float ct_s=0, ct_x;
    cout<<"Ingrese la cantidad de números a sumar:";
    cin>>ct_n;
    do{
  
    cout<<"Ingrese un número:";
    cin>>ct_x;
    ct_c=ct_c+1;
    ct_s=ct_s+ct_x;
       } while(ct_c<ct_n);
//==================================================
//==>Nombre del programa: sumadevariosnumeros
//==>Autor: CORTEZ TORRES JEAN PIERRE
//==> Archivo: CORTEZTORRESJEANPIERRE-sumadevariosnumeros.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//==================================================
            cout<<"Ingrese un número  para sumarlo: "<<ct_s<<endl;
        
        return(0);
}
