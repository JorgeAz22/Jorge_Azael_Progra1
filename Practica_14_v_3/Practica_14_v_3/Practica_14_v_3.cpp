#include <iostream>
#include <locale.h>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::cout << "Diferentes ciclos con contador\n";
    bool con = true;

    while (con)
    {
        int i = 1000;

        // Usando el bucle while
        std::cout << "Contando con while:\n";
        while (i >= 0) {
            std::cout << i << " ";
            i--;  // Decremento
        }
        std::cout << std::endl;

        // Usando el bucle do-while
        i = 1000;  // Restauramos i a 1000
        std::cout << "Contando con do-while:\n";
        do {
            std::cout << i << " ";
            i--;  // Decremento
        } while (i >= 0);

        for (i = 100; i >= 0; i--)  
        {
            std::cout << "El contador va en: " << i << std::endl;
            Sleep(100);
        }

        for (i = 0; i <= 100; ++i) {  
            std::cout << i << " ";
            if (i % 10 == 9) {
                std::cout << std::endl;
            }
        }

        con = false;
    }

    return 0;
}
