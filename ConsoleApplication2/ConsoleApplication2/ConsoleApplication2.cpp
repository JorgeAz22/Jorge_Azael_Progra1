#include <iostream>
#include <string>
#include <locale>


int main() {
    bool repetir = true;

    while (repetir)
    {

        std::setlocale(LC_ALL, "es_MX.UTF-8");
        std::cout << "Piensa en un color (Rojo,Verde,Naranja,Amarillo y Azul) y los adivinare en cinco preguntas." << std::endl;

        std::string color;


        std::cout << "1. ¿Es un color primario? (s/n): ";
        char respuesta;
        std::cin >> respuesta;

        if (respuesta == 's' || respuesta == 'S') {
            color = "rojo";
        }
        else {

            std::cout << "2. ¿Es un color secundario? (s/n): ";
            std::cin >> respuesta;

            if (respuesta == 's' || respuesta == 'S') {

                std::cout << "3. ¿Es un color que se forma mezclando dos colores primarios? (s/n): ";
                std::cin >> respuesta;

                if (respuesta == 's' || respuesta == 'S') {
                    color = "verde";
                }
                else {
                    color = "naranja";
                }
            }
            else {

                std::cout << "4. ¿Es un color cálido? (s/n): ";
                std::cin >> respuesta;

                if (respuesta == 's' || respuesta == 'S') {
                    color = "amarillo";
                }
                else {
                    color = "azul";
                }
            }
        }


        std::cout << "Mi conjetura final es: " << color << std::endl;

    }
    return 0;
}
