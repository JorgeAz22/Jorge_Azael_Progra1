// P003_Mayor_que_Menor_que.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Azael Ascencio Luna 
//Mayor que menor que 


#include <iostream>
#include <math.h>
#include <string>
#include <locale>

int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    float num1 = 0;
    float num2 = 0;
    std::cout << " Hola usuario, hoy vamos a verificar que numero es mayor que o menor\n";
    std::cout << "Usuario, dame tu primer número por favor" << std::endl;
    std::cin >> num1;
    std::cout << "Ahora, dame tu segundo número" << std::endl;
    std::cin >> num2;
    int mayor_edad = 7;
    if (num1 > num2)
    {
        std::cout << num1 << " es mayor a " << num2 << std::endl;
    }
    else

        if (num1 < num2)
        {
            std::cout << num1 << " es menor a " << num2 << std::endl;
        }
    if (num1 = num2)
    {
        std::cout << num1 << " Es igual a " << num2 << std::endl;

    }
    else
    {

    }

}
