#pragma once
#include"ETSIDI.h"
#include "Vector2D.h"

using ETSIDI::SpriteSequence;

class Trampa
{
private:
	SpriteSequence sprite;
	
	Vector2D posicion;
	int explosion = 0; //aviso explosion;

public:
	Trampa();
	Trampa(float _x,float _y);
	void SetCoordenadas(float _x, float _y);
	float GetX();
	float GetY();
	void Dibuja();
	void Mueve();
	void SetExplosion(int _exp);
	int GetExplosion();
	SpriteSequence Boom;
};

