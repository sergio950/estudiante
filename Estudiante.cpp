#include "Persona.cpp"
#include <iostream>
using namespace std; 

class Estudiante:Persona{
    //atributos 
    private: string Carne; 
    public: 
    //constructor 
        Estudiante(string nom, string ape, int tel, string n):Persona(nom,ape,tel){
            Carne=n; 
        }
//modificar (set)
void setCarne(string n){nit=n;}
void setNombres(string nom){nombres=nom;}
void setApellidos(string ape){apellidos=ape;}
void setTelefono(int tel){telefono=tel;}
//mostrar (get)
    string getCarne(){return Carne;}
    string getNombre(){return nombre;}
    string getApellidos(){return apellidos;}
    string getTelefono(){return telefono;}
// metodos 
    void mostrar(){
cout<<"\n----------------------------------"<<endl; 
cout<<Carne<<", "<<nombres<<", "<<apellidos<<", "<<telefono<<endl; 
    }

};