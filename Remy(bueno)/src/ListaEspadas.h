#pragma once
#include "Disparo.h"
#include "Fondo.h"
#include "Interaccion.h"
#include "ListaGatitos.h"



class ListaEspadas {
private:
	Disparo* lista[1];
	int numero;

	friend class Interaccion;

public:
	ListaEspadas();
	virtual ~ListaEspadas();
	Disparo GetDisparo(int j);
	int GetNumero();
	bool agregar(Disparo* q);
	void Dibuja();

	//REBOTE
	void Rebote(ListaPlataformas &f);

	//DESTRUCTOR
	void destruirContenido();

	void Eliminar(int index); 
	void Eliminar(Disparo* q);
	void Mueve(float t);

	//Operador
	Disparo* operator [](int i);
	
};