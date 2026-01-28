//
// Created by 12999356 on 28/01/2026.
//

#ifndef DELORENZI_C_PERSONA_H
#define DELORENZI_C_PERSONA_H
#include <iostream>

using namespace std;

class Persona {
    string nome;
    int eta = 0;

public:
    Persona();
    Persona(string nome, int eta);

    void stampaDati();

    // distruttore della classe
    ~Persona();
};

#endif //DELORENZI_C_PERSONA_H