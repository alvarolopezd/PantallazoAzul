#pragma once
#include "Vector2D.h"

class Trampa
{
private:
	Vector2D posicion;
	unsigned char rojo, verde, azul;

public:
	Trampa();
	void SetCoordenadas(float _x, float _y);
	void SetColores(unsigned char _rojo, unsigned char _verde, unsigned char _zaul);
	void Dibuja();

};

