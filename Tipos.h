#pragma once
#include <iostream>
#include <string>
#include "Pila.h"
#include "MiClase.h"
using namespace std;

void aumentar(int& valor, int incremento, Pila <int>& pilas, size_t i);
void aumentar(double& valor, double incremento, Pila <double>& pilad, size_t i);
void aumentar(string& valor, string incremento, Pila<string>& pilad, size_t i);
void aumentar(MiClase& valor, MiClase incremento, Pila<MiClase>& pilad, size_t i);

template <typename tipo>
void Tipos(tipo valor, tipo incremento, string nombre, const size_t size);

