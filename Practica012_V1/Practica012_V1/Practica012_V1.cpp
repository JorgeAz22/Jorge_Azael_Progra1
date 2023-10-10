// P012_BUCLES_WHILE_FOR_V0.cpp : 
// Jorge Azael Ascencio Luna
// Realizar un contador de vida, que sean 3

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    int i = 0;
    bool iniciar;
    bool repetir = true;
    do
    {



        std::cout << "Acabas de perdir una vida deseas continuar (1.-Si    0.-No)\n";
        std::cin >> iniciar;
        for (i = 0; i <= 100; i = i + 1)
        {
        std::cout << "Tus vidas son: " << i << std::endl;
        }
        if (iniciar == true)
        {
        std::cout << "Te quedan 2 vidas ten cuidado\n";

        std::cout << "Volviste a morir,¿Deseas continuar? (1.-Si      0.-No)\n";
        std::cin >> iniciar;
        for (i = 0; i <= 100; i = i + 1)
        {
        std::cout << "Tus vidas son: " << i << std::endl;
        }
        if (iniciar == true)
        {
        std::cout << "Te queda una vida ten cuidado estas a punto de perder\n";
        std::cout << "¿Quieres continuar aun? (1.-Si ,  0.-No)\n";
        std::cin >> iniciar;
        for (i = 0; i <= 100; i = i + 1)
        {
        std::cout << "Tus vidas son: " << i << std::endl;
        }
        if (iniciar == true)
        {
        std::cout << "Perdiste acabas de perder tu ultima vida\n";
        std::cout << "Suerte en la siguiente partida\n";
        }
        else
        {
        std::cout << "Gracias por jugar, disfruta tu ultima vida\n";
        }
        }
        else
        {
        std::cout << "Que lastima ya estabas lejos\n";
        }

        }


        else
        {
        std::cout << "Perdiste mamahuevo\n";
        }
    } while (true);



}