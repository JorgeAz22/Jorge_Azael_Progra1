#include <iostream>
#include <set>
#include <locale.h>
#include <algorithm>

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//#include <iostream>: Incluye la biblioteca estándar para entrada y salida en C++.
//#include <set>: Incluye la biblioteca estándar para conjuntos en C++.
//#include <locale.h>: Permite configurar la localización en el programa, en este caso, se establece a "es_MX.UTF-8" para usar caracteres específicos del idioma español.
//#include <algorithm>: Incluye funciones de algoritmos genéricos en C++.

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void mostrarSet(const std::set<int>& conjunto) {
    std::cout << "{ ";
    for (const auto& elem : conjunto) {
        std::cout << elem << " ";
    }
    std::cout << "}" << std::endl;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//void mostrarSet(const std::set<int>& conjunto): Define una función llamada mostrarSet que toma un conjunto de enteros std::set<int> como argumento y no devuelve nada (void).
//std::cout << "{ "; : Imprime el inicio de un conjunto en la consola.
//for (const auto& elem : conjunto) { ... } : Itera a través de cada elemento del conjunto usando un bucle for y lo almacena temporalmente en elem.
//std::cout << elem << " "; : Imprime cada elemento del conjunto en la consola.
//std::cout << "}" << std::endl; : Imprime el cierre del conjunto y agrega un salto de línea al final.

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main() {
    bool repetir = true;
    while (repetir)
    {

    setlocale(LC_ALL, "es_MX.UTF-8");

    std::set<int> conjuntoA;
    std::set<int> conjuntoB;

    int numElementosA, numElementosB;

    std::cout << "Ingrese la cantidad de elementos para el conjunto A: ";
    std::cin >> numElementosA;
    std::cout << "Ingrese los elementos del conjunto A: ";
    for (int i = 0; i < numElementosA; ++i) {
        int elemento;
        std::cin >> elemento;
        conjuntoA.insert(elemento);
    }

    std::cout << "Ingrese la cantidad de elementos para el conjunto B: ";
    std::cin >> numElementosB;
    std::cout << "Ingrese los elementos del conjunto B: ";
    for (int i = 0; i < numElementosB; ++i) {
        int elemento;
        std::cin >> elemento;
        conjuntoB.insert(elemento);
    }

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //bool repetir = true;: Se inicializa una variable repetir con el valor booleano true. Esta variable se utilizará para controlar si se repite el bucle principal que recoge los conjuntos del usuario.
    //while (true) { Comienza un bucle while infinito, lo que significa que continuará ejecutándose hasta que se encuentre una instrucción explícita para salir del bucle.
    //setlocale(LC_ALL, "es_MX.UTF-8"); : Establece la configuración regional a "es_MX.UTF-8", lo que puede influir en la configuración de formato y lenguaje utilizada en el programa.
    //std::set<int> conjuntoA; : Declara un conjunto vacío de enteros llamado conjuntoA.
    //std::set<int> conjuntoB; : Declara un conjunto vacío de enteros llamado conjuntoB.
    //int numElementosA, numElementosB; : Declara dos variables para almacenar la cantidad de elementos que el usuario ingresará para cada conjunto.
    //std::cout << "Ingrese la cantidad de elementos para el conjunto A: "; : Muestra un mensaje en la consola solicitando al usuario que ingrese la cantidad de elementos para el conjunto A.
    //std::cin >> numElementosA; : Lee la cantidad de elementos para el conjunto A ingresada por el usuario desde la entrada estándar y la almacena en la variable numElementosA.
    //std::cout << "Ingrese los elementos del conjunto A: "; : Muestra un mensaje en la consola solicitando al usuario que ingrese los elementos para el conjunto A.
    //for (int i = 0; i < numElementosA; ++i) {
    //Comienza un bucle for que se ejecutará numElementosA veces para permitir al usuario ingresar los elementos para el conjunto A.
    //int elemento; : Declara una variable elemento para almacenar cada elemento ingresado por el usuario.
    //std::cin >> elemento; : Lee un elemento ingresado por el usuario desde la entrada estándar y lo almacena en la variable elemento.
    //conjuntoA.insert(elemento); : Inserta el elemento ingresado en el conjunto A utilizando la función insert() de la clase std::set.
    //El resto del código sigue un flujo similar para permitir al usuario ingresar los elementos para el conjunto B y luego continúa con el procesamiento de estos conjuntos 
    //para calcular la unión, intersección o diferencia, lo cual no se muestra en el fragmento proporcionado

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // Operación de unión
    std::set<int> unionSet;
    std::merge(conjuntoA.begin(), conjuntoA.end(), conjuntoB.begin(), conjuntoB.end(), std::inserter(unionSet, unionSet.begin()));

 //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------    
    
 //std::merge: Es una función de la biblioteca <algorithm> de C++ que combina dos rangos ordenados en un solo rango ordenado.
 //conjuntoA.begin(), conjuntoA.end() : Representan el rango de elementos del conjuntoA.
 //conjuntoB.begin(), conjuntoB.end() : Representan el rango de elementos del conjuntoB.
 //std::inserter(unionSet, unionSet.begin()) : std::inserter es una función que crea un iterador especial llamado "insert_iterator".En este caso, se utiliza para insertar los elementos combinados en el conjunto unionSet.unionSet.begin() indica el punto de inicio en unionSet para comenzar a insertar los elementos combinados.
 //En resumen, esta línea de código combina los elementos de conjuntoA y conjuntoB en unionSet manteniendo el orden y sin duplicados, ya que std::set almacena elementos únicos automáticamente
    
    
    std::cout << "Unión de conjunto A y conjunto B: ";
    mostrarSet(unionSet);
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 //La función mostrarSet(unionSet); en el código es una llamada a la función mostrarSet que recibe como argumento el conjunto unionSet. Esta función tiene la responsabilidad de imprimir en la consola el contenido del conjunto que recibe como parámetro.
 //En este caso se utiliza después de calcular la unión de los conjuntos conjuntoA y conjuntoB para mostrar en la consola el resultado de esa operación.

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // Operación de intersección
    std::set<int> interseccionSet;
    std::set_intersection(conjuntoA.begin(), conjuntoA.end(), conjuntoB.begin(), conjuntoB.end(), std::inserter(interseccionSet, interseccionSet.begin()));

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 //Esta línea de código está utilizando la función std::set_intersection de la biblioteca estándar de C++.
 //Esta función es útil para encontrar la intersección entre dos conjuntos ordenados y guardar el resultado en un tercer conjunto.
 //Aquí hay un desglose de los parámetros y su función :
 //conjuntoA.begin(), conjuntoA.end() : Define el rango de elementos del conjunto conjuntoA.
 //conjuntoB.begin(), conjuntoB.end() : Define el rango de elementos del conjunto conjuntoB.
 //std::inserter(interseccionSet, interseccionSet.begin()) : Crea un iterador especial llamado "insert_iterator" que inserta elementos en el conjunto interseccionSet y 
 //especifica que comience a insertar desde interseccionSet.begin().
 //En resumen, esta línea de código calcula la intersección entre conjuntoA y conjuntoB, almacenando el resultado en el conjunto interseccionSet

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    std::cout << "Intersección de conjunto A y conjunto B: ";
    mostrarSet(interseccionSet);

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 //La línea mostrarSet(interseccionSet); en el código llama a la función mostrarSet pasando como argumento el conjunto interseccionSet.
 //Esta función tiene la tarea de imprimir en la consola el contenido del conjunto que recibe como parámetro.
 //En este contexto particular, se usa después de calcular la intersección de los conjuntos conjuntoA y conjuntoB utilizando std::set_intersection.
 //La llamada mostrarSet(interseccionSet); muestra en la consola el contenido del conjunto interseccionSet 
 //Que contiene los elementos que son comunes a ambos conjuntos conjuntoA y conjuntoB, es decir, muestra el resultado de la operación de intersección.
 //Esto permite ver qué elementos están presentes en ambos conjuntos.


//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    // Operación de diferencia
    std::set<int> diferenciaSet;
    std::set_difference(conjuntoA.begin(), conjuntoA.end(), conjuntoB.begin(), conjuntoB.end(), std::inserter(diferenciaSet, diferenciaSet.begin()));

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    //Esta línea de código hace uso de la función std::set_difference de la biblioteca estándar de C++. 
    // La función std::set_difference se emplea para calcular la diferencia entre dos conjuntos ordenados y almacenar el resultado en un tercer conjunto.
    //Desglose de los parámetros y su función :
    //conjuntoA.begin(), conjuntoA.end() : Define el rango de elementos del conjunto conjuntoA.
    //conjuntoB.begin(), conjuntoB.end() : Define el rango de elementos del conjunto conjuntoB.
    //std::inserter(diferenciaSet, diferenciaSet.begin()) : Crea un iterador especial llamado "insert_iterator" que inserta elementos en el conjunto diferenciaSet y especifica que comience a insertar desde diferenciaSet.begin().
    //En resumen, esta línea de código calcula la diferencia entre conjuntoA y conjuntoB, almacenando el resultado en el conjunto diferenciaSet.
    //El iterador se utiliza para insertar los elementos de la diferencia en diferenciaSet desde su inicio(diferenciaSet.begin()).

    std::cout << "Diferencia de conjunto A - conjunto B: ";
    mostrarSet(diferenciaSet);

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
   //La línea mostrarSet(diferenciaSet); en el código llama a la función mostrarSet pasando como argumento el conjunto diferenciaSet.
   //Esta función tiene la tarea de imprimir en la consola el contenido del conjunto que recibe como parámetro.
   //En este contexto específico, se utiliza después de calcular la diferencia entre los conjuntos conjuntoA y conjuntoB utilizando std::set_difference.
   //La llamada mostrarSet(diferenciaSet); mostrará en la consola el contenido del conjunto diferenciaSet, que contiene los elementos de conjuntoA que no están presentes en conjuntoB.
   //Esto permite ver qué elementos pertenecen a un conjunto pero no al otro, es decir, los elementos únicos de conjuntoA.

    std::cout << "¿Quieres crear otro conjunto?\n";
    std::cout << " 1. Si\n";
    std::cout << " 0. No\n";
    std::cin >> repetir;
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
    //Es la pregunta para que se repita el bucle :D
 
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    }

    
    return 0;

}

