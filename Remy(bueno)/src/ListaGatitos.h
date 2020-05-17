#pragma once
#include "Gatitos.h"
#include "Remy.h"
#include "ListaEspadas.h"
#include "Interaccion.h"

#define NUM_MAX_GATOS 10

class ListaGatitos {
private:
	Gatitos* lista[NUM_MAX_GATOS];
	int numero;

	friend class Interaccion;

public:
	ListaGatitos();
	virtual ~ListaGatitos();
	int GetNumero();
	Gatitos GetGatitos(int j);

	//AGREGAR ESFERAS devuelve un valor booleano para saber si se agrego bien la esfera (por si supero el limite de las esferas)
	bool agregar(Gatitos* q);

	//DIBUJA llama a todas las esferas del vector para dibujarlas
	void Dibuja();
	void Mueve(float t);

	//REBOTE
	void Rebote(Remy& remy);
	//void Rebote(ListaEspadas& e);
	void Rebote();		//Rebote con el suelo

	//DESTRUCTOR
	void destruirContenido();

	//ELIMINAR ESFERA
	void Eliminar(int index); // Elimina la esfera de posicion index
	void Eliminar(Gatitos* q);

	//OPERADOR
	Gatitos* operator [](int i);

};