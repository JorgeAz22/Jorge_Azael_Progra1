// P012_BUCLES_WHILE_FOR_V0.cpp : 
// Jorge Azael Ascencio Luna
// Realizar un contador de vida, que sean 3

#include <iostream>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    int i = 0;
    bool iniciar;
    bool repetir = true;
    do
    {



        std::cout << "Acabas de morir deseas continuar (1.-Si    0.-No)\n";
        std::cin >> iniciar;
        for (i = 0; i <= 100; i = i + 1)
            Sleep(300);
        {
            std::cout << "Tienes tantas vidas: " << i << std::endl;
        }
        if (iniciar == true)
        {
            std::cout << "Te quedan 2 vidas cuidado\n";

            std::cout << "te moriste otra vez ,¿Deseas continuar? (1.-Si      0.-No)\n";
            std::cin >> iniciar;
            for (i = 0; i <= 100; i = i + 1)
                Sleep(300);
            {
                std::cout << "Tienes tandas vidas: " << i << std::endl;
            }
            if (iniciar == true)
            {
                std::cout << "Te queda una vida ten mucho cuidado estas a punto de perder\n";
                std::cout << "¿Quieres continuar? (1.-Si ,  0.-No)\n";
                std::cin >> iniciar;
                for (i = 0; i <= 100; i = i + 1)
                    Sleep(300)
                {
                    std::cout << "Tienes tantas vidas: " << i << std::endl;
                }
                if (iniciar == true)
                {
                    std::cout << "Acabas de morir ya no te queda ninguna vida\n";
                    std::cout << "Suerte en tu siguiente partida\n";
                }
                else
                {
                    std::cout << "Disfruta tu ultima vida\n";
                }
            }
            else
            {
                std::cout << "Ya estabas lejos que lastima\n";
            }

        }


        else
        {
            std::cout << "Perdiste mamahuevo\n";
        }
    } while (true);



}