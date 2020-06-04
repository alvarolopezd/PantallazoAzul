#pragma once
#include <ctime>
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
	bool agregar(Gatitos* q);
	void Dibuja();
	void Mueve(float t);

	//REBOTE
	void Rebote(Remy& remy);
	void Rebote();		

	//DESTRUCTOR
	void destruirContenido();
	void Eliminar(int index); 
	void Eliminar(Gatitos* q);

	//OPERADOR
	Gatitos* operator [](int i);

};