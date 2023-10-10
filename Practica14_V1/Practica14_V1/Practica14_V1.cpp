// Practica14_V1.cpp 
//Jorge Azael Ascencio Luna

#include <iostream>
#include <locale.h>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::cout << "El ciclo de control For\n";
    int i = 0;
    //Inicio de carrera; Limite; Paso o salto
    for (i = 1000; i >= 0; i = i--)
    {
    std::cout << "El contador va en: " << i << std::endl;
    }
    for (i = 1000; i >= 0; i = i - 10)
    {
    std::cout << "El contador va en: " << i << std::endl;
    }
    for (i = 100; i >= 0; i = i--)
    {
    std::cout << "El contador va en: " << i << std::endl;
    Sleep(300);
    }
}