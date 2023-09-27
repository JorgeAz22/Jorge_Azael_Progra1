// P005_Operadores Aritmeticos/Bibliotecas
// Jorge AzaeL Ascencio Luna
// Este programa tendrá impresión de pantalla.
// Creación de variables
// Inicialización de variables
// Solicitud de variables al usuario

#include <iostream>
#include <string>

int main()
{
   

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
    k = a;
    l = j * k;
    std::cout << "El resultado de la multipiclacion es" << l << std::endl;

    float m, n;
    m = 3;
    n = sqrt(3);

    std::cout << "El resultado de la raiz es" << n << std::endl;

    float o, p;
    o = 3;
    p = pow(3, 2);
    std::cout << "El resultado de la potencia es" << p << std::endl;

   

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
