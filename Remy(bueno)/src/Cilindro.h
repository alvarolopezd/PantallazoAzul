#pragma once
#include "Vector2D.h"

class Cilindro
{
private:
	Vector2D coordenadas;
	float p, base, top, height, slices, stacks;
	unsigned char rojo, verde, azul;
public:
	void SetAtributos(float _x, float _y, float _base, float _top, float _height, float _slices, float _stacks, unsigned char _rojo, unsigned char _verde, unsigned char _azul);
	void SetCoordenadas(float _x, float _y);
	float GetX();
	float GetY();
	float GetP();
	float GetBase();
	float GetTop();
	float GetHeight();
	float GetSlices();
	float GetStacks();
	unsigned char GetRojo();
	unsigned char GetVerde();
	unsigned char GetAzul();

};



