//Matrices
//Jorge AzaeL Ascencio Luna 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <locale.h>

void llenarMatriz(int matriz[][10], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matriz[i][j] = rand() % 11; 
        }
    }
}
void mostrarMatriz(int matriz[][10], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matriz[i][j] << " ";
            Sleep(200); 
        }
        std::cout << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "ES_MX.UTF-8");
    int matriz1[10][10];
    int matriz2[10][10];
    int matriz3[10][10];

    
    srand(time(NULL));

    llenarMatriz(matriz1, 3);
    llenarMatriz(matriz2, 5);
    llenarMatriz(matriz3, 10);

    int opcion;
    do {
        std::cout << "Elija la matriz que desea ver (1 ( para la Matriz de 3 ) , 2 ( para la matriz de 5 ) o 3 ( para la matriz de 10 ), o 0 para salir: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            mostrarMatriz(matriz1, 3);
            break;
        case 2:
            mostrarMatriz(matriz2, 5);
            break;
        case 3:
            mostrarMatriz(matriz3, 10);
            break;
        default:
            if (opcion != 0) {
                std::cout << "Opción inválida." << std::endl;
            }
            break;
        }
    } while (opcion != 0);

    return 0;
}

