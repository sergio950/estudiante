#include "Estudiante.cpp"
#include <iostream>
using namespace std; 
main(){
string carne,nombres,apellidos; 
int telefono; 
cout<<"Ingrese carne; ";
cin>>carne; 
cout<<"Ingrese nombres; "; 
cin>>nombres; 
cout<<"Ingrese apellidos; ";
cin>>apellidos; 
cout<<"Ingrese telefono; ";
cin>>telefono; 

Estudiante obj = Estudiante(nombres,apellidos,telefono,carne); 
obj.mostrar();

cout<<"-------------Modificar--------------"<<endl;
cout<<"Ingrese carne; ";
cin>>carne; 
cout<<"Ingrese nombres; ";
cin>>nombres; 
cout<<"Ingrese apellidos; "; 
cin>>apellidos; 
cout<<"Ingrese telefono; "; 
cin>>
     
}


