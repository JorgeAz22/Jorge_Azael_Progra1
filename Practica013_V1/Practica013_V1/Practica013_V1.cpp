// Practica013_V1.cpp 
//Jorge Azael Ascencio Luna
//Login bucle infinito 

#include <iostream>
#include <locale>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::string usuario;
    std::string contrasena;

    do
    {
    std::cout << "Bienvenido de nuevo ingresa tu usuario y contraseña\n";
    std::cout << "Usuario:\n";
    std::cin >> usuario;

    std::cout << "Contraseña:\n";
    std::cin >> contrasena;

    if (usuario == "JorgeAz")
    {
    if (contrasena == "Jorge2286")
    {

    std::cout << "Bienvenido lograste entrar\n";

    }
    else
    {

    std::cout << "Intentalo nuevamente el usuario o la contraseña es incorrecta\n";

    }
    }
    else
    {

    std::cout << "Intentalo nuevamenta el usuario o la contraseña es incorrecta\n";

    }
    } while (true);

}