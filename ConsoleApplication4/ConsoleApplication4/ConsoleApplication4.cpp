#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <locale.h>
// Define la clase Pokemon
class Pokemon {

public:
    std::string nombre;
    int nivel;
    int puntosDeVida;
    int ataque;
    int defensa;

    Pokemon(std::string nombre, int nivel, int puntosDeVida, int ataque, int defensa)
        : nombre(nombre), nivel(nivel), puntosDeVida(puntosDeVida), ataque(ataque), defensa(defensa) {}

    void atacar(Pokemon& enemigo, int danio) {
        // Calcula el daño infligido al enemigo
        int danioInfligido = (danio * ataque) / enemigo.defensa;

        // Reduce los puntos de vida del enemigo
        enemigo.puntosDeVida -= danioInfligido;
        if (enemigo.puntosDeVida < 0) {
            enemigo.puntosDeVida = 0;
        }

        std::cout << nombre << " ataca a " << enemigo.nombre << " y le hace " << danioInfligido << " de daño. " << enemigo.nombre << " tiene " << enemigo.puntosDeVida << " puntos de vida restantes." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "ES_MX.UTF-8");
    // Crea dos Pokémon para la batalla
    Pokemon pikachu("Pikachu", 50, 100, 30, 20);
    Pokemon charizard("Charizard", 55, 120, 35, 25);

    // Bucle de la batalla
    while (pikachu.puntosDeVida > 0 && charizard.puntosDeVida > 0) {
        // Pikachu ataca a Charizard
        pikachu.atacar(charizard, 10);

        // Charizard ataca a Pikachu
        charizard.atacar(pikachu, 12);
    }

    // Determina al ganador
    if (pikachu.puntosDeVida <= 0) {
        std::cout << "Charizard gana la batalla!" << std::endl;
    }
    else {
        std::cout << "Pikachu gana la batalla!" << std::endl;
    }

    return 0;
}
