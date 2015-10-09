#include <iostream>
#include <array>
#include "vector.h"

/* Trabajo Practico N15 - BUSQUEDA

REQUISITO:
Se necesita probar los diferentes tipos de busqueda:
- 1. Secuencial.
- 2. Binaria.

PRE-CONDICIONES:
El usuario no ingresa nada, el vector esta previamente cargado
por codigo.
El usuario solo debe ver si se busco correctamente.

MATERIA:
Algoritmos y Estructura de Datos

INTEGRANTES:
Martin AGUEL
Adriel CHAMBI
Federico BUSTAMANTE
Augusto SCHMID

*/
using namespace std;

int main(int argc, char** argv) {
	//Declaraciones
	Vector var_vector;
	int var_dato = 63;
	
	cargar_datos(var_vector);
	cout<<"Lista:"<<endl;
	mostrar_vector(var_vector);
	
	//Desarrollo
	for (unsigned i = 1; i <= 2; i++){
		cout<<"Dato a buscar: "<<var_dato<<endl;
		buscar(var_vector,var_dato,i);
	}
	
	return 0;
}
