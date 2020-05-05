#pragma once
#include "ETSIDI.h"
#include "Plataforma.h"
#include "Mesa.h"
#include "Silla.h"
#include "Queso.h"
#include "Trampa.h"
#include "ListaPlataformas.h"

#include "glut.h"


class Fondo
{
private:
	// INCLUIR CLASES :MESA, PLATAFORMAS, QUESOS, CUCHILLOS, TECHO, FONDO Y SUELO
	// Mesa mesa2lv1
	ListaPlataformas plataformas;
	Mesa m1,m2;
	Silla s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
	Plataforma Suelo;
	Queso q1, q2, q3, q4, q5;
	Trampa t1;

	friend class Interaccion;

public:
	
	void SetPlataformas();
	void PintarLvl1();

};




