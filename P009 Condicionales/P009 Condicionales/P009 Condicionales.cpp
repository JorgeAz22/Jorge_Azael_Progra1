// P009 Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int num1, num2;
    int operador;

    std::cout << "Ingrese el primer numero por favot\n";
    std::cin >> num1;

    std::cout << "Ingrese un operador (1.- +, 2.- -, 3.- ,4- /,5- ^,):\n";
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
    float numero;
    std::cout << "Muy bien usuario ahora dame un numero y te dire su valor absoluto\n";
    
    std::cin >> numero;

    if (numero >=0)
    {
        std::cout << "Muy bien el valor absoluto es: " << numero << std::endl;
        
    }
    else
    {

    }
    std::cout << "Muy bien ahora dime dos numeros y te dire cual es mayor o menor\n";
    int a, b;
    a = 0, b = 0;
    std::cout << "Dame el primer numero (A)\n";
    std::cin >> a;

    std::cout << "Muy bien dame el segundo numero (B)\n";
    std::cin >> b;

    if (a > b)
        std::cout << "A es mayor";
    {
        if (b > a)
            std::cout << "B es mayor";
    }
      
}