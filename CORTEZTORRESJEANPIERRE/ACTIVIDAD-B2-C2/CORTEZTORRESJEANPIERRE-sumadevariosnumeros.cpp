#include <iostream>

using namespace std;

int main()
{
    int c=0, n;
    float s=0, x;
    cout<<"Ingrese la cantidad de numeros a sumar:";
    cin>>n;
    do{
  
    cout<<"Ingrese un numero:";
    cin>>x;
    c=c+1;
    s=s+x;
       } while(c<n);
            cout<<"Ingrese un numero para sumarlo: "<<s<<endl;
        
        return(0);
}
