//Jorge Azael Ascencio Luna
//Historia Narrada
//Proyecto final 

#include <iostream>
#include <string>
#include <Windows.h>

void capitulo1();
void capitulo2();
void capitulo3();

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::cout << "Bienvenido a 'La Búsqueda de la Lágrima de los Dioses'" << std::endl;

    bool juegoActivo = true;

    while (juegoActivo) {
        capitulo1();

        std::cout << "¿Deseas jugar nuevamente? (1: Sí / 0: No): ";
        std::cin >> juegoActivo;
    }

    return 0;
}

void capitulo1() {
    std::cout << "Capítulo 1: El Comienzo" << std::endl;
    std::cout << "1. Rumbo a las Montañas Olvidadas" << std::endl;
    std::cout << "2. Travesía por el Mar de las Sombras" << std::endl;
    std::cout << "3. Infiltración en la Ciudad Perdida" << std::endl;

    int eleccion;
    std::cin >> eleccion;

    switch (eleccion) {
    case 1:
        std::cout << "Has elegido Rumbo a las Montañas Olvidadas. Enfrentarás bestias salvajes y bandidos en tu camino." << std::endl;
        capitulo2();
        break;
    case 2:
        std::cout << "Has elegido Travesía por el Mar de las Sombras. Enfrentarás tormentas mortales y criaturas marinas." << std::endl;
        capitulo2();
        break;
    case 3:
        std::cout << "Has elegido Infiltración en la Ciudad Perdida. Enfrentarás tribus hostiles y peligros en la ciudad." << std::endl;
        capitulo2();
        break;
    default:
        std::cout << "Elección no válida. Por favor, elige 1, 2 o 3." << std::endl;
        break;
    }
}

void capitulo2() {
    std::cout << "Capítulo 2: Desafíos en el Camino" << std::endl;
    std::cout << "1. Encuentro con Aliados o Enemigos" << std::endl;
    std::cout << "2. El Cruce del Río de la Desesperación" << std::endl;
    std::cout << "3. La Prueba del Laberinto" << std::endl;

    int eleccion;
    std::cin >> eleccion;

    switch (eleccion) {
    case 1:
        std::cout << "Te encuentras con un grupo de desconocidos. ¿Deberías confiar en ellos y formar una alianza (1) o seguir solo (2)?" << std::endl;
        std::cin >> eleccion;
        if (eleccion == 1) {
            std::cout << "Formas una alianza con los desconocidos. Tu equipo se fortalece, pero también compartes las recompensas." << std::endl;
        }
        else if (eleccion == 2) {
            std::cout << "Decides seguir solo. Eres más ágil pero también más vulnerable." << std::endl;
        }
        else {
            std::cout << "Elección no válida. Volviendo al comienzo del capítulo 2." << std::endl;
            capitulo2();
            return;
        }
        break;
    case 2:
        std::cout << "Te enfrentas a un río furioso. ¿Deberías cruzar nadando (1), construir un puente improvisado (2) o buscar un desvío más seguro (3)?" << std::endl;
        std::cin >> eleccion;
        if (eleccion == 1) {
            std::cout << "Arriesgas cruzar nadando y enfrentas desafíos físicos, pero logras pasar." << std::endl;
        }
        else if (eleccion == 2) {
            std::cout << "Construyes un puente improvisado. El proceso lleva tiempo, pero cruzas con seguridad." << std::endl;
        }
        else if (eleccion == 3) {
            std::cout << "Encuentras un desvío más seguro. Evitas el río peligroso pero pierdes tiempo en el camino." << std::endl;
        }
        else {
            std::cout << "Elección no válida. Volviendo al comienzo del capítulo 2." << std::endl;
            capitulo2();
            return;
        }
        break;
    case 3:
        std::cout << "Encuentras un antiguo laberinto. ¿Deberías enfrentarte a los desafíos directamente (1), buscar atajos (2) o intentar sobornar a un guía local (3)?" << std::endl;
        std::cin >> eleccion;
        if (eleccion == 1) {
            std::cout << "Enfrentas los desafíos directamente. Es peligroso, pero demuestras tu valentía." << std::endl;
        }
        else if (eleccion == 2) {
            std::cout << "Buscas atajos y encuentras un camino más fácil. Evitas algunos desafíos, pero también te arriesgas a perderte." << std::endl;
        }
        else if (eleccion == 3) {
            std::cout << "Intentas sobornar a un guía local. Logras atravesar el laberinto con ayuda, pero a un costo." << std::endl;
        }
        else {
            std::cout << "Elección no válida. Volviendo al comienzo del capítulo 2." << std::endl;
            capitulo2();
            return;
        }
        break;
    default:
        std::cout << "Elección no válida. Volviendo al comienzo del capítulo 2." << std::endl;
        capitulo2();
        return;
    }

    capitulo3();
}

void capitulo3() {
    std::cout << "Capítulo 3: La Confrontación Final" << std::endl;
    std::cout << "1. La Fuerza de la Espada" << std::endl;
    std::cout << "2. La Astucia del Engaño" << std::endl;
    std::cout << "3. La Sabiduría de la Diplomacia" << std::endl;

    int eleccion;
    std::cin >> eleccion;

    switch (eleccion) {
    case 1:
        std::cout << "Eliges enfrentarte a los guardianes con la fuerza de la espada. Superas los desafíos físicos y obtienes la Lágrima de los Dioses." << std::endl;
        std::cout << "¡Felicidades, has completado tu épica búsqueda!" << std::endl;
        break;
    case 2:
        std::cout << "Optas por el engaño para burlar a los guardianes. Logras infiltrarte silenciosamente y obtener la Lágrima de los Dioses." << std::endl;
        std::cout << "¡Felicidades, has completado tu épica búsqueda!" << std::endl;
        break;
    case 3:
        std::cout << "Decides buscar la vía pacífica y negociar con los guardianes. Con habilidades diplomáticas, obtienes la Lágrima de los Dioses sin derramamiento de sangre." << std::endl;
        std::cout << "¡Felicidades, has completado tu épica búsqueda!" << std::endl;
        break;
    default:
        std::cout << "Elección no válida. Volviendo al comienzo del capítulo 3." << std::endl;
        capitulo3();
        return;
    }
}