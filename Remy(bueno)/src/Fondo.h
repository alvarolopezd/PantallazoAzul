#pragma once
#include "ETSIDI.h"
#include "Plataforma.h"
#include "Queso.h"
#include "Trampa.h"
#include "ListaPlataformas.h"
#include "ListaQuesos.h"
#include "glut.h"


class Fondo
{
private:
	// INCLUIR CLASES :MESA, PLATAFORMAS, QUESOS, CUCHILLOS, TECHO, FONDO Y SUELO
	// Mesa mesa2lv1
	ListaPlataformas plataformas;
	ListaQuesos quesos;
	//Queso q1, q2, q3, q4, q5;
	Trampa t1;

	friend class Interaccion;

public:
	
	void SetPlataformas();
	void PintarLvl1();

};




