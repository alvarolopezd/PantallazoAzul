#pragma once
#include "Queso.h"
#include "Remy.h"


class ListaQuesos {
private:
	Queso* lista[5];
	int numero;
	
	friend class Interaccion;

public:
	ListaQuesos();
	virtual ~ListaQuesos();

	//AGREGAR ESFERAS devuelve un valor booleano para saber si se agrego bien la esfera (por si supero el limite de las esferas)
	bool agregar(Queso* q);

	//DIBUJA llama a todas las esferas del vector para dibujarlas
	void Dibuja();

	//REBOTE
	void Rebote(Remy& remy);

	//DESTRUCTOR
	void destruirContenido();

	//ELIMINAR ESFERA
	void Eliminar(int index); // Elimina la esfera de posicion index
	void Eliminar(Queso* q);

	//OPERATOR
	Queso* operator [](int i);

};