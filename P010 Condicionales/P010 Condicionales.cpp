// P010 Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::string usuario;
    std::string contrasena;

    std::cout << "Hola usuario acontinuacion te pedire tu usuario y tu contraseña para poder ingresar\n";
    do
    {
        std::cout << "Usuario: \n";
        std::cin >> usuario;

        std::cout << "Constraseña: \n";
        std::cin >> contrasena;

        if (usuario == "JorgeAz")
        {
            if (contrasena == "Jorge2286")
            {

                std::cout << "      Felicidades pudiste entrar\n  ";

            }
            else
            {

                std::cout << "       Intentalo nuevamente tu usuario esta mal o tu contraseña\n         ";

            }
        }
        else
        {

            std::cout << "       Ocurruio algo tu contraseña o tu usuario estan mal\n         ";

        }
    } while (usuario != "JorgeAz"); (contrasena != "Jorge2286");

}






