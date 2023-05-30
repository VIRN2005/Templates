#pragma once
#include <iostream>
#include <string>
#include "Pila.h"
#include "MiClase.h"
using namespace std;

void aumentar(int& valor, int incremento, Pila <int>& pilas, size_t i) {
	cout << valor << " ";
	valor = valor + incremento;
	pilas.insertar(valor - 1);
}
void aumentar(double& valor, double incremento, Pila <double>& pilas, size_t i) {
	cout << valor << " ";
	valor = valor + incremento;
	pilas.insertar(valor - 1.1);
}

void aumentar(string& valor, string incremento, Pila<string>& pilas, size_t i) {
	string Temp = valor + to_string(i);
	pilas.insertar(Temp);
	cout << Temp << " ";
}

void aumentar(MiClase& valor, MiClase incremento, Pila<MiClase>& pila, size_t i) {
	string Temp = "MC" + to_string(i);
	MiClase mc(Temp);
	cout << Temp << " ";
	pila.insertar(mc);
}

template <typename tipo>
void Tipos(tipo valor, tipo incremento, string nombre, const size_t size) {
	Pila<tipo> pila;
	cout << "--> Insertar elementos en " << nombre << endl;
	for (size_t i = 0; i < size; ++i) {
		aumentar(valor, incremento, pila, i);
	}
	cout << "\n<-- Extraer elementos de " << nombre << endl;

	while (!pila.estaVacia()) {
		cout << pila.encima() << " ";
		pila.extraer();
	}
	cout << endl;
}