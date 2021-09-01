#include <iostream>

class lenguaje{
	
	private:
		char*n_nombre;
		char*n_apellido;
		
	public:
		void imprimirInfo();
		void SetNombre(char*nombre){n_nombre=nombre}
		void SetApellido(char*apellido){n_apellido=apellido	}
	
};


int main (){
	std::cout << "Bienvenido";
	std::cout << "Ingresa el alfabeto. Solamente se se pueden letras de la 'a' a la 'z' ";
	std::cout << "La 'E' en mayuscula se va a considerar como vacio";
	std::cin.get();
	Empleado empleado12;
	empleado12.setNombre("jose");
	empleado12.setApellido("Gonzales")
	
	empelado12.imprimirInfo();
	
	return 0;
	
}
