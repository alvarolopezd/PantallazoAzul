#pragma once
#include "Vector2D.h"

class Cono
{
private:
	Vector2D coordenadas;
	float base, height, slices, stacks;
	unsigned char rojo, verde, azul;
public:
	void SetAtributos(float _x, float _y,float _base, float _height, float _slices, float _stacks,unsigned char _rojo, unsigned char _verde, unsigned char _azul);
	float GetX();
	float GetY();
	float GetBase();
	float GetHeight();
	float GetSlices();
	float GetStacks();
	unsigned char GetRojo();
	unsigned char GetVerde();
	unsigned char GetAzul();


};


