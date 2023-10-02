// P011 Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    char mi_primer_cadenacaracteres[140] = "Hola usuario";
    bool iniciar;
    std::cout << "Bienvenido a un adivina quien el cual la tematica es de deportes, ¿estas listo?:\n";
    std::cout << "1.- Si     0.- No\n";
    std::cin >> iniciar;

    if (iniciar == true)
    {
        std::cout << "Grandioso acontinuacion tendrás que pensar en respuesta de si y no,\n";
    }
    else
    {
        std::cout << "Regresa cuando estes listo\n";
    }
    std::cout << "La tematica es deportes, piensa en un deporte que involucre balones, pueden ser Basquetbol, Futbol o Futbol AMericano\n";
    std::cout << "¿Tu deporte se juega en césped?\n";
    std::cout << "1.- Si      0.-No\n";
    std::cin >> iniciar;

    if (iniciar == true)
    {
        std::cout << "¿Tu deporte se juega en equipos ?\n";
        std::cout << "1.- Si   0.-No\n";
        std::cin >> iniciar;
        if (iniciar == true)
        {
            std::cout << "¿Tu deporte es muy visto en Estados Unidos?\n";
            std::cout << "1.- Si    0.-No\n";
            std::cin >> iniciar;
            if (iniciar == true)
            {
                std::cout << "¿Tu deporte se juega con un balon de forma ovoide?\n";
                std::cout << "1.- Si     0.- No\n";
                std::cin >> iniciar;
                if (iniciar == true)
                {
                    std::cout << "Tu deporte es futbol americano\n";
                }
                else
                {
                    std::cout << "¿Tu deporte se juega con un balon de forma esferica?\n";
                    std::cout << "1.- Si    0.-No\n";
                    std::cin >> iniciar;
                    if (iniciar == true)
                        std::cout << "Tu deporte es Futbol\n";
                }
            }
        }
    }
    else
    {
        std::cout << "Tu deporte es basquetbol\n";
    }
}