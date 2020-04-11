#pragma once
#include "Plataforma.h"
#include "Queso.h"
#include "Trampa.h"
#include "glut.h"

class Fondo
{
private:
	// INCLUIR CLASES :MESA, PLATAFORMAS, QUESOS, CUCHILLOS, TECHO, FONDO Y SUELO
	// Mesa mesa2lv1
	Plataforma p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15,p16,p17,p18,p19,p20;
	Queso q1, q2, q3, q4, q5;
	Trampa t1;

public:

	void SetPlataformas();
	void PintarLvl1();


};




