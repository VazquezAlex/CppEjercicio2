/*
*   Calcular la hipotenusa teniendo como medidas cateto adyacente 6cm y cateto opuesto 8cm. Imprimir el resultado.
*   Programado por Alejandro Vazquez del Mercado .. 13 Julio 2016.
*   Contacto: alejandrovazquez.dev@gmail.com || alejandro@lineium.com
*/

// Delcaracion de Librerías.
#include <iostream>
#include <math>

// Declaracion de Variables.
float ca = 6, co = 8, r = 0;

// Metodo main.
int main() {

	r = sqrt(((ca)*(ca))+((co)*(co)));
	std::cout << "La hipotenusa es: " << r << std::endl;
	std::cout << "Presiona una tecla para continuar...";
	getchar();

	return 1;
}