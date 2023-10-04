#include <iostream>
#include <cmath>
#include <locale>
#include <math.h>



int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    int opcion;
    double numero1, numero2;
    bool repetir = true;
    while (repetir)
    {


    std::cout << "Hola usuario esta es una calculadora elige la accion que quieras hacer" << std::endl;
    std::cout << "1. Suma" << std::endl;
    std::cout << "2. Resta" << std::endl;
    std::cout << "3. Multiplicación" << std::endl;
    std::cout << "4. División" << std::endl;
    std::cout << "5. Valor Absoluto" << std::endl;
    std::cout << "6. Mayor y Menor que" << std::endl;
    std::cout << "Elija una opción (1-6): ";
    std::cin >> opcion;

    switch (opcion) {
    case 1:
        std::cout << "Ingrese el primer número: ";
        std::cin >> numero1;
        std::cout << "Ingrese el segundo número: ";
        std::cin >> numero2;
        std::cout << "Resultado de la suma: " << numero1 + numero2 << std::endl;
        break;
    case 2:
        std::cout << "Ingrese el primer número: ";
        std::cin >> numero1;
        std::cout << "Ingrese el segundo número: ";
        std::cin >> numero2;
        std::cout << "Resultado de la resta: " << numero1 - numero2 << std::endl;
        break;
    case 3:
        std::cout << "Ingrese el primer número: ";
        std::cin >> numero1;
        std::cout << "Ingrese el segundo número: ";
        std::cin >> numero2;
        std::cout << "Resultado de la multiplicación: " << numero1 * numero2 << std::endl;
        break;
    case 4:
        std::cout << "Ingrese el primer número: ";
        std::cin >> numero1;
        std::cout << "Ingrese el segundo número: ";
        std::cin >> numero2;
        if (numero2 != 0) {
            std::cout << "Resultado de la división: " << numero1 / numero2 << std::endl;
        }
        else {
            std::cout << "Error: No se puede dividir por cero." << std::endl;
        }
        break;
    case 5:
        std::cout << "Ingrese un número: ";
        std::cin >> numero1;
        std::cout << "Valor absoluto de " << numero1 << " es " << abs(numero1) << std::endl;
        break;
    case 6:
        std::cout << "Ingrese el primer número: ";
        std::cin >> numero1;
        std::cout << "Ingrese el segundo número: ";
        std::cin >> numero2;
        if (numero1 > numero2) {
            std::cout << numero1 << " es mayor que " << numero2 << std::endl;
        }
        else if (numero1 < numero2) {
            std::cout << numero1 << " es menor que " << numero2 << std::endl;
        }
        else {
            std::cout << numero1 << " y " << numero2 << " son iguales." << std::endl;
        }
        break;
    default:
        std::cout << "Opción no válida. Por favor, elija una opción válida (1-6)." << std::endl;
        break;
    }
    }

    return 0;
}
