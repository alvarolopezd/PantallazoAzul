#pragma once
#include "Gatitos.h"
#include"Remy.h"
#include "Fondo.h"
#include "Plataforma.h"



class Interaccion {

public:
	static void rebote(Gatitos& g);
	static void rebote(Remy& g, Fondo& f);
	static void rebote(Remy& g, Plataforma& p);
};
