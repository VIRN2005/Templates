#pragma once
#include <iostream>
using namespace std;

class MiClase {
    string Nombre;
public:
    MiClase(string Nombre) {
        this->Nombre = Nombre;
    }
    string obtenerNombre() const {
        return Nombre;
    }
    friend ostream& operator<<(ostream& o, const MiClase& mc) {
        return o << mc.Nombre;
    }
};

