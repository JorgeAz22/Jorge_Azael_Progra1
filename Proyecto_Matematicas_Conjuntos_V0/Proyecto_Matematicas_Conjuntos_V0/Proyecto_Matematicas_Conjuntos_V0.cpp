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
    setlocale(LC_ALL, "es_MX.UTF-8");
    // Definición de conjuntos
    std::set<int> conjuntoA = { 1, 2, 3, 4, 5 };
    std::set<int> conjuntoB = { 3, 4, 5, 6, 7 };

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 //Estas líneas de código están creando dos conjuntos en C++.
 //conjuntoA se inicializa con los valores{ 1, 2, 3, 4, 5 }.
 //conjuntoB se inicializa con los valores{ 3, 4, 5, 6, 7 }.
 //En términos simples, estas líneas definen dos conjuntos(conjuntoA y conjuntoB) con distintos valores enteros.
 //Estos conjuntos pueden ser utilizados para realizar operaciones comunes de conjuntos, como la unión, intersección, diferencia, etc.
 //Las operaciones entre estos conjuntos, como calcular la unión(unionSet), intersección(interseccionSet), o diferencia(diferenciaSet), pueden realizarse utilizando estos conjuntos previamente definidos.

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

    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//int main() { ... }: Función principal del programa, donde comienza la ejecución.
//setlocale(LC_ALL, "es_MX.UTF-8"); : Configura la localización para mostrar texto en español.
//std::set<int> conjuntoA = { 1, 2, 3, 4, 5 }; : Define un conjunto llamado conjuntoA que contiene los valores{ 1, 2, 3, 4, 5 }.
//std::set<int> conjuntoB = { 3, 4, 5, 6, 7 }; : Define otro conjunto llamado conjuntoB con los valores{ 3, 4, 5, 6, 7 }.
//Las secciones siguientes del código realizan operaciones como unión, intersección y diferencia entre conjuntoA y conjuntoB, usando funciones de la librería <algorithm> como std::merge, std::set_intersection y std::set_difference.
//Cada operación calcula el resultado correspondiente y lo muestra en la consola utilizando la función mostrarSet.
//Finalmente, return 0; indica que la ejecución del programa ha finalizado correctamente.

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
