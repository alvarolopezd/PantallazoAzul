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

	//AGREGAR ESFERAS devuelve un valor booleano para saber si se agrego bien la esfera (por si supero el limite de las esferas)
	bool agregar(Trampa* q);

	//DIBUJA llama a todas las esferas del vector para dibujarlas
	void Dibuja();

	//REBOTE
	void Rebote(Remy& remy);

	//DESTRUCTOR
	void destruirContenido();

	//ELIMINAR ESFERA
	void Eliminar(int index); // Elimina la esfera de posicion index
	void Eliminar(Trampa* q);

	//OPERATOR
	Trampa* operator [](int i);

	//MUEVE
	void Mueve();

};