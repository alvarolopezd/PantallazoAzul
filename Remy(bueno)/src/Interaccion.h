#pragma once
#include "Gatitos.h"
#include"Remy.h"
#include "Fondo.h"
#include "Plataforma.h"
#include "Queso.h"
#include "Disparo.h"
#include "Enemigo.h"


class Interaccion {

public:
	static void rebote(Gatitos& g);
	static void rebote(Remy& g, int& n);
	static void rebote(Remy& g, Fondo& f);
	static void rebote(Remy& g, Plataforma& p);
	static bool rebote(Remy& g, Queso& q);
	static bool rebote(Remy& r, Gatitos& g);
	static bool rebote(Disparo& d, Gatitos& g);
	static bool rebote(Disparo& d, Plataforma& p);
	static bool rebote(Remy& r, Trampa& t);
	static bool rebote(Enemigo& e, Plataforma& p);
	static void rebote(Enemigo& g, Fondo& e);
	static bool rebote(Disparo& d, Enemigo& g);
	static bool rebote(Remy& r, Enemigo& g);
};
