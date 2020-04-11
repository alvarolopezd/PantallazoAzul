#pragma once
#include "Vector2D.h"
#include "Cono.h"

class Queso {
private:
	Vector2D posicion;
	Cono cuerpo;
public:
	Queso();
	//virtual ~Queso();
	void SetPosicion(float _x, float _y);
	float GetX();
	float GetY();
	void Dibuja();
	
	
};
