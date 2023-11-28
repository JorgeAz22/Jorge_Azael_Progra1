#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void capitulo1();
void capitulo2();
void capitulo3();

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");

    cout << "Bienvenido a 'La Búsqueda de la Lágrima de los Dioses'" << endl;

    bool juegoActivo = true;

    while (juegoActivo) {
        capitulo1();

        cout << "¿Deseas jugar nuevamente? (1: Sí / 0: No): ";
        cin >> juegoActivo;
    }

    return 0;
}

void capitulo1() {
    cout << "Capítulo 1: El Comienzo" << endl;
    cout << "1. Rumbo a las Montañas Olvidadas" << endl;
    cout << "2. Travesía por el Mar de las Sombras" << endl;
    cout << "3. Infiltración en la Ciudad Perdida" << endl;

    int eleccion;
    cin >> eleccion;

    switch (eleccion) {
    case 1:
        cout << "Has elegido Rumbo a las Montañas Olvidadas. Enfrentarás bestias salvajes y bandidos en tu camino." << endl;
        capitulo2();
        break;
    case 2:
        cout << "Has elegido Travesía por el Mar de las Sombras. Enfrentarás tormentas mortales y criaturas marinas." << endl;
        capitulo2();
        break;
    case 3:
        cout << "Has elegido Infiltración en la Ciudad Perdida. Enfrentarás tribus hostiles y peligros en la ciudad." << endl;
        capitulo2();
        break;
    default:
        cout << "Elección no válida. Por favor, elige 1, 2 o 3." << endl;
        break;
    }
}

void capitulo2() {
    cout << "Capítulo 2: Desafíos en el Camino" << endl;
    cout << "1. Encuentro con Aliados o Enemigos" << endl;
    cout << "2. El Cruce del Río de la Desesperación" << endl;
    cout << "3. La Prueba del Laberinto" << endl;

    int eleccion;
    cin >> eleccion;

    switch (eleccion) {
    case 1:
        cout << "Te encuentras con un grupo de desconocidos. ¿Deberías confiar en ellos y formar una alianza (1) o seguir solo (2)?" << endl;
        cin >> eleccion;
        if (eleccion == 1) {
            cout << "Formas una alianza con los desconocidos. Tu equipo se fortalece, pero también compartes las recompensas." << endl;
        }
        else if (eleccion == 2) {
            cout << "Decides seguir solo. Eres más ágil pero también más vulnerable." << endl;
        }
        else {
            cout << "Elección no válida. Volviendo al comienzo del capítulo 2." << endl;
            capitulo2();
            return;
        }
        break;
    case 2:
        cout << "Te enfrentas a un río furioso. ¿Deberías cruzar nadando (1), construir un puente improvisado (2) o buscar un desvío más seguro (3)?" << endl;
        cin >> eleccion;
        if (eleccion == 1) {
            cout << "Arriesgas cruzar nadando y enfrentas desafíos físicos, pero logras pasar." << endl;
        }
        else if (eleccion == 2) {
            cout << "Construyes un puente improvisado. El proceso lleva tiempo, pero cruzas con seguridad." << endl;
        }
        else if (eleccion == 3) {
            cout << "Encuentras un desvío más seguro. Evitas el río peligroso pero pierdes tiempo en el camino." << endl;
        }
        else {
            cout << "Elección no válida. Volviendo al comienzo del capítulo 2." << endl;
            capitulo2();
            return;
        }
        break;
    case 3:
        cout << "Encuentras un antiguo laberinto. ¿Deberías enfrentarte a los desafíos directamente (1), buscar atajos (2) o intentar sobornar a un guía local (3)?" << endl;
        cin >> eleccion;
        if (eleccion == 1) {
            cout << "Enfrentas los desafíos directamente. Es peligroso, pero demuestras tu valentía." << endl;
        }
        else if (eleccion == 2) {
            cout << "Buscas atajos y encuentras un camino más fácil. Evitas algunos desafíos, pero también te arriesgas a perderte." << endl;
        }
        else if (eleccion == 3) {
            cout << "Intentas sobornar a un guía local. Logras atravesar el laberinto con ayuda, pero a un costo." << endl;
        }
        else {
            cout << "Elección no válida. Volviendo al comienzo del capítulo 2." << endl;
            capitulo2();
            return;
        }
        break;
    default:
        cout << "Elección no válida. Volviendo al comienzo del capítulo 2." << endl;
        capitulo2();
        return;
    }

    capitulo3();
}

void capitulo3() {
    cout << "Capítulo 3: La Confrontación Final" << endl;
    cout << "1. La Fuerza de la Espada" << endl;
    cout << "2. La Astucia del Engaño" << endl;
    cout << "3. La Sabiduría de la Diplomacia" << endl;

    int eleccion;
    cin >> eleccion;

    switch (eleccion) {
    case 1:
        cout << "Eliges enfrentarte a los guardianes con la fuerza de la espada. Superas los desafíos físicos y obtienes la Lágrima de los Dioses." << endl;
        cout << "¡Felicidades, has completado tu épica búsqueda!" << endl;
        break;
    case 2:
        cout << "Optas por el engaño para burlar a los guardianes. Logras infiltrarte silenciosamente y obtener la Lágrima de los Dioses." << endl;
        cout << "¡Felicidades, has completado tu épica búsqueda!" << endl;
        break;
    case 3:
        cout << "Decides buscar la vía pacífica y negociar con los guardianes. Con habilidades diplomáticas, obtienes la Lágrima de los Dioses sin derramamiento de sangre." << endl;
        cout << "¡Felicidades, has completado tu épica búsqueda!" << endl;
        break;
    default:
        cout << "Elección no válida. Volviendo al comienzo del capítulo 3." << endl;
        capitulo3();
        return;
    }
}