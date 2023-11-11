#include <iostream>
#include <string>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::cout << "Piensa en un color (Rojo, Azul, Amarillo, Verde, Naranja, Morado) y responderé tus preguntas para adivinarlo." << std::endl;
    std::string respuesta;

    std::cout << "Listo para jugar? (s/n): ";
    std::cin >> respuesta;

    if (respuesta != "s" && respuesta != "S") {
        std::cout << "Hasta la próxima. Adiós!" << std::endl;
        return 0;
    }

    std::string conjetura;
    bool adivinado = false;

    while (!adivinado) {
        std::cout << "¿El color que estás pensando es rojo? (s/n): ";
        std::cin >> respuesta;
        if (respuesta == "s" || respuesta == "S") {
            conjetura = "Rojo";
            adivinado = true;
        }
        else {
            std::cout << "¿El color que estás pensando es azul? (s/n): ";
            std::cin >> respuesta;
            if (respuesta == "s" || respuesta == "S") {
                conjetura = "Azul";
                adivinado = true;
            }
            else {
                std::cout << "¿El color que estás pensando es amarillo? (s/n): ";
                std::cin >> respuesta;
                if (respuesta == "s" || respuesta == "S") {
                    conjetura = "Amarillo";
                    adivinado = true;
                }
                else {
                    std::cout << "¿El color que estás pensando es verde? (s/n): ";
                    std::cin >> respuesta;
                    if (respuesta == "s" || respuesta == "S") {
                        conjetura = "Verde";
                        adivinado = true;
                    }
                    else {
                        std::cout << "¿El color que estás pensando es naranja? (s/n): ";
                        std::cin >> respuesta;
                        if (respuesta == "s" || respuesta == "S") {
                            conjetura = "Naranja";
                            adivinado = true;
                        }
                        else {
                            std::cout << "¿El color que estás pensando es morado? (s/n): ";
                            std::cin >> respuesta;
                            if (respuesta == "s" || respuesta == "S") {
                                conjetura = "Morado";
                                adivinado = true;
                            }
                            else {
                                std::cout << "No he adivinado el color. ¿Puedes darme una pista? (s/n): ";
                                std::cin >> respuesta;
                                if (respuesta != "s" && respuesta != "S") {
                                    std::cout << "Has vencido al juego. ¡Hasta la próxima!" << std::endl;
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    std::cout << "¡He adivinado! Estás pensando en el color " << conjetura << "." << std::endl;

    return 0;
}
