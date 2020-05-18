#pragma once
#include "ETSIDI.h"
#include "Plataforma.h"
#include "ListaVidas.h"
#include "ListaBombas.h"
#include "ListaPlataformas.h"
#include "ListaQuesos.h"
#include "glut.h"


class Fondo
{
private:
	// INCLUIR CLASES :MESA, PLATAFORMAS, QUESOS, CUCHILLOS, TECHO, FONDO Y SUELO
	// Mesa mesa2lv1
	
	ListaQuesos quesos;
	ListaVidas vidas;
	ListaBombas bombas;


	friend class Interaccion;


public:
	ListaPlataformas plataformas;
	void SetPlataformas();
	void PintarLvl1();
	void PintarLvl2();
	void PintarLvl3();

};




