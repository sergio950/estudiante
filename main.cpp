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
cin>>telefono; 

obj.setCarne(carne);
obj.setNombres(nombres);
obj.setApellidos(apellidos); 
obj.setTelefono(telefono); 

    cout<<"\n\nNuevo carne; "<<obj.getCarne()<<endl;
	cout<<"Nuevos nombres; "<<obj.getNombres()<<endl;
	cout<<"Nuevos apellidos; "<<obj.getApellidos()<<endl;
	cout<<"Nuevos numero de telefono; "<<obj.getTelefono()<<endl;
	

}


