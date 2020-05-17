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
	//AGREGAR ESFERAS devuelve un valor booleano para saber si se agrego bien la esfera (por si supero el limite de las esferas)
	bool agregar(Disparo* q);

	//DIBUJA llama a todas las esferas del vector para dibujarlas
	void Dibuja();

	//REBOTE
	//void Rebote(ListaGatitos& g);
	void Rebote(ListaPlataformas &f);

	//DESTRUCTOR
	void destruirContenido();

	//ELIMINAR ESFERA
	void Eliminar(int index); // Elimina la esfera de posicion index
	void Eliminar(Disparo* q);
	void Mueve(float t);

	//Operador
	Disparo* operator [](int i);
	
};