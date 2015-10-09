#include "vector.h"

//Definiciones

void cargar_datos(Vector &par_vector){								//Carga los datos
	par_vector.lista = {13,21,33,45,54,63,75,88,91};
	par_vector.top = 9;
}

void mostrar_vector(Vector &par_vector){
	for (int i = 0; i < par_vector.top; i++){
		cout<<par_vector.lista.at(i)<<";";
	}
	cout<<endl<<endl;
}

void buscar(const Vector &par_vector,const int &par_dato,const unsigned &par_tipo){
	switch (par_tipo){
		case 1:
			busqueda_secuencial(par_vector,par_dato);
			break;
		case 2:
			busqueda_binaria(par_vector,par_dato);
			break;
	}
}

void busqueda_secuencial(const Vector &par_vector,const int &par_dato){
	cout<<"Buqueda Secuencial: "<<endl;
	int i;
	
	for(i=0; (i<par_vector.top)&&(par_vector.lista.at(i)!=par_dato); i++){
		
	}
	
	cout<<"Posicion: "<<i<<endl<<endl;
}

void busqueda_binaria(const Vector &par_vector,const int &par_dato){
	int ini = 0;
	int fin = par_vector.top;
	int mitad = (ini+fin) / 2;
	int s=-1;
	
	while(ini>=0 && ini<=fin && fin<=par_vector.top && s==-1){
		if (par_vector.lista.at(mitad)<par_dato){
			ini=mitad+1;
			mitad=(ini+fin)/2;
		}
		else{
			if(par_vector.lista.at(mitad)==par_dato){
				s=mitad;
			}
			else{
				fin=mitad-1;
				mitad=(ini+fin)/2;
			}
		}
	}
	
	cout<<"Busqueda Binaria: "<<endl;
	cout<<"Esta en la posicion: "<<s<<endl;
}
