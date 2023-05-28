#include <iostream> 
#include <locale>
#include "Tipos.h"
#include "MiClase.h"

void aumentar(int& valor, int incremento, Pila <int>& pilas, size_t i) {
	cout << valor << " ";
	valor = valor + incremento;
	pilas.insertar(valor-1);
}
void aumentar(double& valor, double incremento, Pila <double>& pilas, size_t i) {
	cout << valor << " ";
	valor = valor + incremento;
	pilas.insertar(valor-1.1);
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
	if (pila.estaVacia()) {
		cout << "La pila está vacía." << endl;
	}
	else {
		while (!pila.estaVacia()) {
			cout << pila.encima() << " ";
			pila.extraer();
		}
	}
	cout << endl;
}


int main() {
	/*setlocale(LC_ALL, "spanish");*/

	Tipos<double>(1.1, 1.1, "doblePila", 5);
	Tipos<int>(1, 1, "intPila", 10);
	Tipos<string>("C++", "", "stringPila", 10);
	MiClase mc(" ");
	Tipos<MiClase>(mc, mc, "mcPila", 10);
	cout << endl;
}
