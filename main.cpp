#include <array>
#include <cstring>
#include <iostream>
#include "Persona.h"

using namespace std;

int main() {
    /*string nome;
    cout << "Inserisci il nome: ";
    // cin >> nome; // legge fino al primo spazio bianco
    getline(cin, nome); // legge tutto il buffer

    auto* persona = new Persona(nome, 1);
    persona->stampaDati();
    delete persona;
    // con delete libera la memoria e invoca il distruttore
    persona = nullptr;*/

    int arr[5]; // array STATICO, va nello stack
    int arr2[10] = {1, 2, 4, 8, 16, 32, 64, 128}; // array STATICO
    arr[1] = 2;

    int* arrd = new int[10]; // array DINAMICO, va nello heap
    arrd[0] = 3;
    delete[] arrd; // libera lo spazio dedicato all'array

    array<int, 7> arr3 = {1, 2, 3, 4, 5, 6};
    cout << arr3[0] << endl;
    cout << arr3.size() << endl; // 7
    return 0;
}