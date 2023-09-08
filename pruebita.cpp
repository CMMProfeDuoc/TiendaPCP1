#include <iostream>
#include <string>

using namespace std;

class Persona{
	public:
		string nombre;
		string apellido;
		string rut;
		int edad;
		int dinero;	
	
		Persona (){}

		Persona (string nombre, string apellido, string rut, int edad, int dinero){
			this->nombre = nombre;
			this->apellido = apellido;
			this->rut = rut;
			this->edad = edad;
			this->dinero = dinero;
		}
};

class Computador{
	public:
		string nombre;
		int precio;
		
		Computador (){}
		
		Computador (string nombre, int precio){
			this->nombre = nombre;
			this->precio = precio; 
		}
};

Computador comprarComputador (Computador computador, Persona persona, string tipoPago){
	    int precioTotalComputador = computador.precio;
		
		if (persona.edad >= 18){
			if (persona.edad >= 60){
				precioTotalComputador *= 0.85;
			}
	
	        if (tipoPago == "tarjetaCredito"){
	            precioTotalComputador *= 1.03;
	        }
	        
	        if (persona.dinero >= precioTotalComputador){
	            return computador;
	        }
		}
        
        return Computador("nulo",0);
}


int main (){
	
	Persona persona1;
	Persona persona2;
	
	int opcion;
	
	Computador computadores [3] = {Computador("HP Omen",1200),Computador("MacbookPro",2500),Computador("Acer",250)};
	
	cout<<"Hola! Bienvenido"<<endl;
	
	//persona 1
	cout<<"Ingrese su nombre: "; cin>>persona1.nombre;
	cout<<"Ingrese apellido: "; cin>>persona1.apellido;
	cout<<"Ingrese edad: "; cin>>persona1.edad;
	cout<<"Ingrese dinero: "; cin>>persona1.dinero;
	
	for (int i=0; i < 3; i++){
		cout<<i<<". "<<computadores[i].nombre<<" $"<<computadores[i].precio<<endl;
	}
	cout<<"Ingrese opcion: "; cin>>opcion;
	
	cout<<endl;
	cout<<"Ha comprado: ";
	cout<<comprarComputador(computadores[opcion],persona1,"efectivo").nombre;
	
	return 0;
}
