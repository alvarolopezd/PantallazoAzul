#pragma once

#include "Vida.h"
#include "Remy.h"
#define NUM_MAX_VIDAS 4

class ListaVidas
{
private:
	Vida* lista[NUM_MAX_VIDAS];
	int numero;

	friend class Interaccion;

public:
	ListaVidas();
	virtual ~ListaVidas();

	//AGREGAR ESFERAS devuelve un valor booleano para saber si se agrego bien la esfera (por si supero el limite de las esferas)
	bool agregar(Vida* q);

	//DIBUJA llama a todas las esferas del vector para dibujarlas
	void Dibuja();

	//REBOTE
	void Rebote(Remy& remy);

	//DESTRUCTOR
	void destruirContenido();

	//ELIMINAR ESFERA
	void Eliminar(int index); // Elimina la esfera de posicion index
	void Eliminar(Vida* q);

	//OPERATOR
	Vida* operator [](int i);

	//Movimiento
	void Mueve(float t);

};