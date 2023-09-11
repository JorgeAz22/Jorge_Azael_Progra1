// P003_Variables_V0.cpp : 
// Jorge Azael Ascencio Luna
// Este programa tendrá impresión de pantalla.
// Creación de variables
// Inicialización de variables
// Solicitud de variables al usuario
// 

#include <iostream>
#include <string>

int main()
{
    //Variables
    //Tipo - Nombre - Inicialización
    bool mi_primer_booleano = true;
    int mi_primer_entero = 0;
    float mi_primer_flotante = 0.0;
    char mi_primer_caracter = 'a';
    char mi_primer_cadenacaracteres[100] = "Hola vato";
    std::string mi_primer_string = "Alo chavalitos";

    //Mostrarle al usuario lo que creamos de variables
    std::cout << "Muy buenos días Mau espero estes bien\n";
    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_booleano << std::endl;
    std::cout << "En el entero tienes guardado: " <<
        mi_primer_entero << std::endl;
    std::cout << "En el flotante tienes guardado: " <<
        mi_primer_flotante << std::endl;
    std::cout << "En el caracter tienes guardado: " <<
        mi_primer_caracter << std::endl;
    std::cout << "En la cadena tienes guardado: " <<
        mi_primer_cadenacaracteres << std::endl;
    std::cout << "En el string tienes guardado: " <<
        mi_primer_string << std::endl;

    //Solicitar al usuario cambios
    std::cout << "usuario dame por favor un 0 o 1;" <<
        std::endl;
    std::cin >> mi_primer_booleano;
    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_booleano << std::endl;
    //Solicitar al usuario cada una de las variables

    std::cout << "usuario dame por favor un numero entero" <<
        std::endl;
    std::cin >> mi_primer_entero;
    std::cout << "En el entero tienes guardado: " <<
        mi_primer_entero << std::endl;

    std::cout << "usuario dame por favor un numero del 0.0 al 1.9" <<
        std::endl;
    std::cin >> mi_primer_flotante;
    std::cout << "En el floante tienes guardado: " <<
        mi_primer_flotante << std::endl;

    std::cout << "usuario dame por favor dame un caracter" <<
        std::endl;
    std::cin >> mi_primer_caracter;
    std::cout << "En el caracter tienes guardado: " <<
        mi_primer_caracter << std::endl;

    std::cout << "usuario dame por favor dame una cadena de caracteres" <<
        std::endl;
    std::cin >> mi_primer_cadenacaracteres;
    std::cout << "En la cadena de caracteres tienes guardado: " <<
        mi_primer_cadenacaracteres << std::endl;





}