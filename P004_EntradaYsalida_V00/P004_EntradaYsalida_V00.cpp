// P004_EntradaSalida_V0.cpp : 
// Jorge Azael Ascencio Luna
// Realizar un consultorio médico el cual solicite 3 bool 2 string 1 char 2 int 1 float
//Al final te entrega tu IMC.
//

#include <iostream>
#include <locale.h>
#include <string>
 
using namespace std;

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool sintoma1, sintoma2, sintoma3;
    std::string Nombre;
    std::string Relato;
    char sexo;
    int edad;
    int peso;
    float altura;
    float IMC;

    std::cout << "Bienvenido al consultorio del medico brujo!\n";
    std::cout << "Primero que nada ¿cual seria su nombre?\n"; 
    getline(cin, Nombre);

    std::cout << "Bienvenido ¿cuentame que es lo que tienes?\n";
    getline(std::cin, Relato);

    std::cout << "¿Eres hombre o mujer?H para hombre y M para mujer responda\n";
    std::cin >> sexo;

    std::cout << "Por favor responde con un 1 para si y con 0 para no ¿Tienes fiebre?\n";
    std::cin >> sintoma1;

    std::cout << "¿Te duele la cabeza?\n";
    std::cin >> sintoma2;

    std::cout << "¿Tienes tos?\n";
    std::cin >> sintoma3;

    std::cout << "¿Cuantos años tienes?\n";
    std::cin >> edad;

    std::cout << "¿Cuanto pesas?\n";
    std:cin >> peso;

    std::cout << "¿Cuanto mides?\n";
    std::cin >> altura;

    std::cout << "Bien con los datos recopilados tu IMC es de\n";

}
