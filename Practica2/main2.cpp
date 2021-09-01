#include <iostream>
/*
class lenguaje{
	
	private:
		char*n_nombre;
		char*n_apellido;
		
	public:
		void imprimirInfo();
		void SetNombre(char*nombre){n_nombre=nombre}
		void SetApellido(char*apellido){n_apellido=apellido	}
	
};

void lenguaje::ImprimirInfo( )
{
   cout << "Nombre: " << m_nombre << '\n';
   cout << "Departamento: " << m_departamento << '\n';
   cout << "Puesto: " << m_posicion << '\n';
   cout << "Salario: " << m_salario << '\n';
}



*/
int main (){
	std::cout << "Bienvenido\n";
	std::cout << "Ingresa el alfabeto. Solamente se se pueden letras de la 'a' a la 'z' \n";
	std::cout << "La 'E' en mayuscula se va a considerar como vacio \n";
	char letra;
	std::cin >> letra; //le pido al usuario que ingrese el simbolo 
	std::cout <<"Tu letra es \n"<<letra;;
	
	
	std::cin.get(); // le pido al usuario que presionen cualquier tecla

	
	return 0;
	
}
