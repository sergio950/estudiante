#include "Persona.cpp"
#include <iostream>
using namespace std; 

class Estudiante:Persona{
     
    private: string carne; 
    public: 
        Estudiante(string nom, string ape, int tel, string n):
        Persona(nom,ape,tel){
            carne=n; 
        }

void setCarne(string n){carne=n;}
void setNombres(string nom){nombres=nom;}
void setApellidos(string ape){apellidos=ape;}
void setTelefono(int tel){telefono=tel;}

    string getCarne(){return carne;}
    string getNombres(){return nombres;}
    string getApellidos(){return apellidos;}
    int getTelefono(){return telefono;}
 
    void mostrar(){
cout<<"\n----------------------------------"<<endl; 
cout<<carne<<", "<<nombres<<", "<<apellidos<<", "<<telefono<<endl; 
    }
};

