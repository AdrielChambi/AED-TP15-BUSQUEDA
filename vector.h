#ifndef _vector_h
#define _vector_h

#include <iostream>
#include <array>    // Se necesita activar C++11

using namespace std;

//DECLARACIONES:

struct Vector {														//Tipo de Dato Vector
	array<int,100> lista;
	unsigned top;
};

void cargar_datos(Vector &par_vector);															//Carga los datos
void mostrar_vector(Vector &par_vector);
void buscar(const Vector &par_vector,const int &par_dato,const unsigned &par_tipo);
void busqueda_secuencial(const Vector &par_vector,const int &par_dato);
void busqueda_binaria(const Vector &par_vector,const int &par_dato);

#endif
