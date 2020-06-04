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
	bool agregar(Queso* q);
	void Dibuja();

	//REBOTE
	void Rebote(Remy& remy);

	//DESTRUCTOR
	void destruirContenido();
	void Eliminar(int index);
	void Eliminar(Queso* q);

	//OPERATOR
	Queso* operator [](int i);

};