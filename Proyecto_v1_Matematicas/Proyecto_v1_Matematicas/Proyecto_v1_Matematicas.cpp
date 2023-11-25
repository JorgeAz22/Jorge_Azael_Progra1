#include <iostream>
#include <cmath>
#include <locale.h>

double funcion(double x) {
    // Aquí define la función para la cual deseas calcular el límite.
    // Por ejemplo, para calcular el límite de f(x) = (x^2 - 4) / (x - 2) cuando x tiende a 2.
    return (x * x - 4) / (x - 2);
}

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool repetir = true;
    while (true)
    {

    double a; // Valor hacia el cual x tiende (p. ej., 2 en el caso anterior).
    std::cout << "Ingrese el valor hacia el cual x tiende: ";
    std::cin >> a;

    double epsilon; // Valor muy pequeño que define qué tan cerca de 'a' estamos.
    std::cout << "Ingrese el valor de epsilon (tolerancia): ";
    std::cin >> epsilon;

    double limite;
    double h = 1.0; // Paso inicial para calcular el límite.

    // Calculando el límite con un enfoque de límites finitos.
    // Aproximamos el límite evaluando la función en valores cada vez más cercanos a 'a'.
    for (int i = 0; i < 10000; ++i) {
        limite = funcion(a + h);
        h = h / 2.0; // Reducimos a la mitad el paso en cada iteración.

        if (std::abs(limite - funcion(a - h)) < epsilon) {
            break; // Si la diferencia es menor que epsilon, detenemos el cálculo.
        }
    }

    std::cout << "El límite es aproximadamente: " << limite << std::endl;

    std::cout << "¿Quieres hacer un limite distino?\n";
    std::cout << " 1. Si\n";
    std::cout << " 0. No\n";
    std::cin >> repetir;
    }
    return 0;
}

//Explicacion de cada linea:
// 1. `#include <iostream>`: Esta línea permite la entrada y salida estándar. `iostream` es una biblioteca estándar de C++ que proporciona funcionalidades para entrada / salida, como `cin` y `cout`.
// 2. `#include <cmath>`: Esta línea incluye la biblioteca `cmath`, que contiene funciones matemáticas comunes, como `abs` (valor absoluto) utilizada en este caso para calcular la diferencia entre dos valores.
// 3. `#include <locale.h>`: Esta línea incluye la biblioteca `locale.h`, que permite manipular las configuraciones regionales o de localización en el programa.En este caso, se usa para establecer la localización en español de la salida.
// 4. `double funcion(double x) { ... }`: Aquí se define una función llamada `funcion`, que toma un argumento `x` y devuelve un valor double.Esta función representa la función matemática para la cual se desea calcular el límite.
// 5. `int main() { ... }`: Este es el punto de entrada principal del programa.Todo el código ejecutable se encuentra dentro de esta función.
// 6. `setlocale(LC_ALL, "es_MX.UTF-8"); `: Configura la localización regional para la salida del programa en español de México(UTF - 8), permitiendo que los mensajes se muestren en ese idioma.
// 7. `double a; `: Declara una variable `a` que se utilizará para almacenar el valor hacia el cual tiende `x`.
// 8. `std::cout << "Ingrese el valor hacia el cual x tiende: "; `: Muestra un mensaje en la consola para solicitar al usuario el valor hacia el cual tiende `x`.
// 9. `std::cin >> a; `: Lee el valor ingresado por el usuario desde la consola y lo almacena en la variable `a`.
// 10. `double epsilon; `: Declara una variable `epsilon` que se usará como criterio de precisión para el cálculo del límite.
// 11. `std::cout << "Ingrese el valor de epsilon (tolerancia): "; `: Muestra un mensaje para solicitar al usuario el valor de epsilon.
// 12. `std::cin >> epsilon; `: Lee el valor de epsilon ingresado por el usuario desde la consola y lo almacena en la variable `epsilon`.
// 13. `double limite; `: Declara una variable `limite` que almacenará el valor aproximado del límite calculado.
// 14. `double h = 1.0; `: Inicializa una variable `h` que se utilizará como paso inicial para calcular el límite.
// 15. El bloque `for` realiza el cálculo del límite con un enfoque de límites finitos, aproximando el valor del límite evaluando la función en valores cada vez más cercanos a `a`.
// 16. `std::cout << "El límite es aproximadamente: " << limite << std::endl; `: Muestra el valor aproximado del límite calculado en la consola.
// 17. `return 0; `: Devuelve un valor 0 para indicar que el programa se ha ejecutado correctamente y ha finalizado.