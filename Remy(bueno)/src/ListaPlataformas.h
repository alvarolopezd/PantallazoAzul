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

	//AGREGAR ESFERAS devuelve un valor booleano para saber si se agrego bien la esfera (por si supero el limite de las esferas)
	bool agregar(Plataforma* e);

	//DIBUJA llama a todas las esferas del vector para dibujarlas
	void Dibuja();

	//REBOTE
	void Rebote(Remy& remy);
	void Rebote(Enemigo& r);

	//DESTRUCTOR
	void destruirContenido();

	//ELIMINAR ESFERA
	void Eliminar(int index); // Elimina la esfera de posicion index
	void Eliminar(Plataforma* e);


};