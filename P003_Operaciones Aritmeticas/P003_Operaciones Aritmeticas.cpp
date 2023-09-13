// P003_Variables.cpp : 
// Jorge AzaeL Ascencio Luna
// Este programa tendrá impresión de pantalla.
// Creación de variables
// Inicialización de variables
// Solicitud de variables al usuario

#include <iostream>
#include <string>

int main()
{
    //Variables
    //Tipo - Nombre - Inicialización
    bool mi_primer_booleano = true;
    int mi_primer_entero = 100;
    float mi_primer_flotante = 0.0;
    char mi_primer_caracter = 'a';
    char mi_primer_cadenacaracteres[100] = "Hola vato";
    std::string mi_primer_string = "Alo chavalitos";

    //Mostrarle al usuario lo que creamos de variables
    std::cout << "Muy buenos días Disdem espero estes bien\n";
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

    //Solicitar al usuario cada una de las variables
    std::cout << "Usuario dame un 0 o 1;" <<
        std::endl;
    std::cin >> mi_primer_booleano;
    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_booleano << std::endl;
    std::cout << "Usuario dame un 0 o 100;" <<
        std::endl;
    std::cin >> mi_primer_entero;
    std::cout << "En el entero tienes guardado: " <<
        mi_primer_entero << std::endl;
    std::cout << "Usuario dime un numero entre 0.0 a 100.0;" <<
        std::endl;
    std::cin >> mi_primer_flotante;
    std::cout << "En el flotante tienes guardado: " <<
        mi_primer_flotante << std::endl;
    std::cout << "Usuario dame un caracter;" <<
        std::endl;
    std::cin >> mi_primer_caracter;
    std::cout << "En el caracter tienes guardado: " <<
        mi_primer_caracter << std::endl;
    std::cout << "Usuario dame una cadena de caracters;" <<
        std::endl;
    std::cin >> mi_primer_cadenacaracteres;
    std::cout << "En la cadena tienes guardado: " <<
        mi_primer_cadenacaracteres << std::endl;
    std::cout << "Usuario dame un formato string;" <<
        std::endl;
    std::cin >> mi_primer_string;
    std::cout << "En el string tienes guardado: " <<
        mi_primer_string << std::endl;

    //Realizar Operaciones//
    
    float a, b, c;
    a = 5;
    b = 10;
    c = a / b;
    std::cout << "El resultado de la division es" << c << std::endl;

    float d, e, f;
    d = 5;
    e = 2;
    f = d - e;
    std::cout << "El resultado de la resta es" << f << std::endl;

    float g, h, i;
    g = 5;
    h = 23;
    i = g + h;
    std::cout << "El resultado de la suma es" << c << std::endl;

    float j, k, l;
    j = 3;
    k = 7;
    l = j * k;
    std::cout << "El resultado de la multipiclacion es" << l << std::endl;

    float m, n;
    m = 3;
    n = sqrt(3);
    
    std::cout << "El resultado de la raiz es" << n << std::endl;

    float o, p;
    o = 3;
    p = pow(3,2);
    std::cout << "El resultado de la potencia es" << p << std::endl;




}