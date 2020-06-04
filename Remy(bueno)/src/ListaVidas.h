#pragma once

#include "Vida.h"
#include "Remy.h"
#define NUM_MAX_VIDAS 20

class ListaVidas
{
private:
	Vida* lista[NUM_MAX_VIDAS];
	int numero;

	friend class Interaccion;

public:
	ListaVidas();
	virtual ~ListaVidas();
	bool agregar(Vida* q);
	void Dibuja();

	//REBOTE
	void Rebote(Remy& remy);

	//DESTRUCTOR
	void destruirContenido();
	void Eliminar(int index); 
	void Eliminar(Vida* q);

	//OPERATOR
	Vida* operator [](int i);

	//Movimiento
	void Mueve(float t);

};