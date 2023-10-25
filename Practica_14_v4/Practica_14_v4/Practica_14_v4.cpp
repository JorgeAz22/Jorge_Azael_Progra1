// Practica14_V4.cpp 
//Jorge Azael Ascencio Luna
//Contador 
#include <iostream>
#include <locale.h>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::cout << "Diferentes ciclos con contador\n";
    bool con = true;
    int main(); {
        int i = 1000;
        while (i >= 0) {
            std::cout << "El contador while va en: " << i << std::endl;
            i--;
        }

        i = 1000;
        do {
            std::cout << "El contador do va en: " << i << std::endl;
            i--;
        } while (i >= 0);


        for (i = 1000; i >= 0; i--)
        {
            std::cout << "El contador for va en: " << i << std::endl;
        }
        for (i = 100; i >= 0; i = i--)
        {
            std::cout << "El contador va en: " << i << std::endl;
            Sleep(70);
        }
        for (int i = 0; i <= 100; ++i) {
            std::cout << i << " ";
            if (i % 10 == 9) {
                std::cout << std::endl;
            }
        }

        con = false;
    }

    return 0;
}