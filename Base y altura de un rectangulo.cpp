#include <iostream>
using namespace std;
int main ()
{
	//Mensaje de bienvenida
	cout << "Hola! este programa 1.10 calcula la base y la altura de un rectangulo";
	
	float base, altura, area, perimetro;
	//Solicitar las medidas del rectangulo al usurio
	std::cout << "ingrese la base del rectangulo: ";
	std::cin >> base;
	std::cout << "Ingresa la altura del rectangulo: ";
	std::cin >> altura;
	// Calcular el area y perimetro
	area = base * altura;
    perimetro = 2 * (base + altura);
	// Mostrar los resultados
	std::cout << "El area del rectangulo es: " << area << std::endl;
	std::cout << "El perimetro del rectangulo es: " << perimetro << std::endl;
	return 0;
}
