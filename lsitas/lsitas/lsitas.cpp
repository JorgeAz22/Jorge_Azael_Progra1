// P011_Listas_V0.cpp : 
// Jorge Azael Ascencio Luna 
// Listas enlazadas
#include <iostream>


class nodo
{
public:
    int edad;
    nodo* next;
};

int main()
{
    nodo* cabeza = NULL;
    nodo* torso = NULL;
    nodo* pies = NULL;

    cabeza = new nodo();
    torso = new nodo();
    pies = new nodo();

    cabeza->edad = 25;
    cabeza->next = torso;

    torso->edad = 15;
    torso->next = pies;

    pies->edad = 5;
    pies->next = NULL;

    while (cabeza != NULL)
    {
        std::cout << "La edad del nodo es: " << cabeza->edad << std::endl;
        cabeza = cabeza->next;
    }
}