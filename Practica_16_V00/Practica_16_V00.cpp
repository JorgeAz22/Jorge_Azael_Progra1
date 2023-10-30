// Practica_16_V00.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jorge Azael 
//Captura de 3 videojuegos

#include <iostream>
#include <locale.h>
#include <string>
int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::string nombres[3];
    std::string autor[3];
    std::string estudio[3];
    int ano[3];

    for (int i = 0; i <= 2; i++)
    {
        std::cout << "Ingresa el nombre del videojuego: " << i << std::endl;
        getline(std::cin, nombres[i]);
        std::cout << "Ingresa el nombre del autor: " << i << std::endl;
        getline(std::cin, autor[i]);
        std::cout << "Ingresa el nombre del estudio: " << i << std::endl;
        getline(std::cin, estudio[i]);
        std::cout << "Ingresa el año en que fue lanzado: " << i << std::endl;
        std::cin >> ano[i];
        std::cin .ignore();
    }
    
    for (int j = 0; j <= 2; j++)
    {
        std::cout << " El nombre del videojuego " << j << " es " << nombres[j] << std::endl;
        std::cout << " El autor del videojuego " << j << " es " << autor[j] << std::endl;
        std::cout << " El nombre del estudio " << j << " es " << nombres[j] << std::endl;
        std::cout << " El año de lanzamiento del videojuego " << j << " es " << ano[j] << std::endl;
    }

}

