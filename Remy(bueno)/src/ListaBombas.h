#pragma once
#include "Trampa.h"
#include "Remy.h"
#define NUM_MAX_BOMBAS 100

class ListaBombas
{
private:
	Trampa *lista[NUM_MAX_BOMBAS];
	int numero;

	friend class Interaccion;

public:
	ListaBombas();
	virtual ~ListaBombas();

	bool agregar(Trampa* q);
	void Dibuja();

	//REBOTE
	void Rebote(Remy& remy);

	//DESTRUCTOR
	void destruirContenido();
	void Eliminar(int index);
	void Eliminar(Trampa* q);

	//OPERATOR
	Trampa* operator [](int i);

	//MUEVE
	void Mueve();

};