#pragma once
#include "Gatitos.h"
#include"Remy.h"
#include "Fondo.h"
#include "Plataforma.h"
#include "Queso.h"
#include "Disparo.h"


class Interaccion {

public:
	static void rebote(Gatitos& g);
	static void rebote(Remy& g);
	static void rebote(Remy& g, Fondo& f);
	static void rebote(Remy& g, Plataforma& p);
	static bool rebote(Remy& g, Queso& q);
	static bool rebote(Remy& r, Gatitos& g);
	static bool rebote(Disparo& d, Gatitos& g);
	static bool rebote(Disparo& d, Plataforma& p);
	static bool rebote(Remy& r, Trampa& t);
};
