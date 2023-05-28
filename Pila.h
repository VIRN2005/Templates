#pragma once
#include <deque>
#include <iostream>
using namespace std;

template< typename T >

class Pila {
public:
	T& encima() { 
		return pila.front(); 
	}
	void insertar(const T& sacarvalor) { 
		pila.push_front(sacarvalor); 
	}
	void extraer() { 
		pila.pop_front(); 
	}
	bool estaVacia() const { 
		return pila.empty(); 
	}
	size_t size() const {
		return pila.size();
	}
private:
	 deque< T > pila;
};
