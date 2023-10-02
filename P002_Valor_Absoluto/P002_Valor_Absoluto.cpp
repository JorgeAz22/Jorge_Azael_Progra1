// P002_Valor_Absoluto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jorge Azael Ascencio Luna


#include <cmath>
#include <iostream>
#include <locale>
    int main()
    {
        std::setlocale(LC_ALL, "es_MX.UTF-8");
        float valor;
        std::cout << " Hola usuario, hoy podrás conocer el valor absoluto de cualquier numero, ya sea positivo o negativo\n";
        std::cout << "Escribe un numero positivo o negativo ";
        std::cin >> valor;
        float valorAbsoluto = abs(valor);
        std::cout << "El valor absoluto es " << valorAbsoluto;


    





}