#pragma once
#include "Vector2D.h"

class Esfera
{
private:
	Vector2D coordenadas;
	float radius, slices, stacks;
	unsigned char rojo, verde, azul;
public:
	void SetAtributos(float _x, float _y, float _radius, float _slices, float _stacks, unsigned char _rojo, unsigned char _verde, unsigned char _azul);
	float GetX();
	float GetY();
	float GetRadius();
	float GetSlices();
	float GetStacks();
	unsigned char GetRojo();
	unsigned char GetVerde();
	unsigned char GetAzul();

};



