// P005_Operadores Aritmeticos/Bibliotecas
// Jorge AzaeL Ascencio Luna
// Este programa tendrá impresión de pantalla.
// Creación de variables
// Inicialización de variables
// Solicitud de variables al usuario

#include <iostream>
#include <string>

int main()
{
	int num1, num2;
	int operador;

	std::cout << "Ingrese el primer numero por favot\n";
	std::cin >> num1;

	std::cout << "Ingrese un operador (1.- +, 2.- -, 3.- *,4- /,5- ^,):\n";
	std::cin >> operador;

	std::cout << "Ingrese el segundo numero\n";
	std::cin >> num2;

	int resultado;
	switch (operador)
	{

	case 1:
		resultado = num1 + num2;

		std::cout << "El resultado de la suma es " << resultado << std::endl;
	break;
	case 2:
			resultado = num1 - num2;
			std::cout << "El resultado de la resta es " << resultado << std::endl;
			break;
	case 3:
			resultado = num1 * num2;
			std::cout << "El resultado de la multiplacion es " << resultado << std::endl;
			break;
	case 4:
			resultado = num1 / num2;
			std::cout << "El resultado de la division es " << resultado << std::endl;
			break;
	case 5:
			resultado = num1 ^ num2;
			std::cout << "El resultado de la potencia es " << resultado << std::endl;
			break;
      default:
		  std::cout << "Operador invalido\n";
		  return 1;
	}

	}