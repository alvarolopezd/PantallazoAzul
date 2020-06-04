#pragma once
#define MAX_PLATAFORMAS 50
#include "Remy.h"
#include "Enemigo.h"
#include "Plataforma.h"

class ListaPlataformas
{
private:
	Plataforma* lista[MAX_PLATAFORMAS];
	int numero;
public:
	ListaPlataformas();
	virtual ~ListaPlataformas();
	int GetNumero();
	Plataforma GetPlataforma(int j);
	bool agregar(Plataforma* e);
	void Dibuja();

	//REBOTE
	void Rebote(Remy& remy);
	void Rebote(Enemigo& r);

	//DESTRUCTOR
	void destruirContenido();

	void Eliminar(int index);
	void Eliminar(Plataforma* e);


};