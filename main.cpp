#include <cstring>
#include <iostream>

using namespace std;

class Persona {
    // variabili private
    string nome;
    int eta = 0;

public:
    Persona(string nome, int eta) {
        // this è un puntatore all'oggetto corrente
        this->nome = nome;
        this->eta = eta;
    }

    void stampaDati() {
        cout << nome << " eta: " << eta << endl;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    string nome;
    cin >> nome;
    Persona persona(nome, 1);
    persona.stampaDati();
    return 0;
}