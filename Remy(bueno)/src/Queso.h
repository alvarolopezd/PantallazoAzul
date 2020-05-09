#pragma once
#include "ETSIDI.h"
#include "Vector2D.h"

using ETSIDI::SpriteSequence;

class Queso {
private:
	

	Vector2D posicion;
	float altura;
	
public:
	SpriteSequence Quesito;
	Queso(float _x, float _y);
	//virtual ~Queso();
	void SetPosicion(float _x, float _y);
	void SetAltura(float _altura);

	float GetX();
	float GetY();
	void Dibuja();
	
	
};
