#pragma once
#include"ETSIDI.h"
#include "Vector2D.h"

using ETSIDI::SpriteSequence;

class Trampa
{
private:
	SpriteSequence sprite;
	Vector2D posicion;
	unsigned char rojo, verde, azul;

public:
	Trampa();
	Trampa(float _x,float _y);
	void SetCoordenadas(float _x, float _y);
	void SetColores(unsigned char _rojo, unsigned char _verde, unsigned char _zaul);
	float GetX();
	float GetY();
	void Dibuja();

};

