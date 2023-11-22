#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    int n, m;
    bool repetir = true;
    while (repetir)
    {

    std::cout << "Ingrese el número de filas (n): ";
    std:: cin >> n;
    std::cout << "Ingrese el número de columnas (m): ";
    std::cin >> m;

    int** matriz = new int* [n];

    // Verificación si alguna dimensión es mayor a 3
    bool aleatorio = (n > 3 || m > 3);

    srand(time(0));
    for (int i = 0; i < n; ++i) {
        matriz[i] = new int[m];

        if (aleatorio) {
            for (int j = 0; j < m; ++j) {
                matriz[i][j] = rand() % 100; // Valores aleatorios entre 0 y 99
            }
        }
        else {
            for (int j = 0; j < m; ++j) {
                std::cout << "Ingrese el elemento en la posición [" << i << "][" << j << "]: ";
                std::cin >> matriz[i][j];
            }
        }
    }

    std::cout << "\nLa matriz es:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
        delete[] matriz[i];
    }
    delete[] matriz;
    std::cout << "¿Quieres imnprimir una matriz distinta?\n";
    std::cout << " 1. Si\n";
    std::cout << " 0. No\n";
    std::cin >> repetir;

    }
    return 0;
}
