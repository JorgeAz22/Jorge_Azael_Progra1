#include <iostream>
#include <locale.h>
#include <string>

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
    std::cout << "Bienvenido al consultorio del del medico brujo!\n";
    std::cout << "Cual es tu nombre? " << std::endl;
    getline(std::cin, Nombre);
    std::cout << Nombre;

    std::cout << "¿Cuentame que tienes?\n";
    getline(std::cin, Relato);


    std::cout << "Eres hombre o mujer pon M para mujer y H para hombre\n";
    std::cin >> sexo;

    std::cout << "Responde a la siguientes preguntas con 1 si es si y 0 si es no\n";
    std::cout << "¿Tienes fiebre?\n";
    std::cin >> sintoma1;

    std::cout << "¿Te duele el estomago?\n";
    std::cin >> sintoma2;

    std::cout << "¿tiene dolor de cabeza?\n";
    std::cin >> sintoma3;

    std::cout << "¿Cuantos años?\n";
    std::cin >> edad;

    std::cout << "¿Cuanto pesas?\n";
    std::cin >> peso;

    std::cout << "¿Cual es tu altura?\n";
    std::cin >> altura;


    IMC = peso / (altura * altura);

    std::cout << "Tu IMC es de\n";
    std::cout << IMC;
}