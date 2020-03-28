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

void Cono::SetAtributos(float _x, float _y,float _base, float _height, float _slices, float _stacks, unsigned char _rojo, unsigned char _verde, unsigned char _azul)
{
	coordenadas.SetCoordenadas(_x, _y);
	base = _base;
	height = _height;
	slices = _slices;
	stacks = _stacks;
	rojo = _rojo;
	verde = _verde;
	azul = _azul;
}



float Cono::GetX()
{
	return coordenadas.GetX();
}

float Cono::GetY()
{
	return coordenadas.GetY();
}

float Cono::GetBase()
{
	return base;
}

float Cono::GetHeight()
{
	return height;
}

float Cono::GetSlices()
{
	return slices;
}

float Cono::GetStacks()
{
	return stacks;
}

unsigned char Cono::GetRojo()
{
	return rojo;
}

unsigned char Cono::GetVerde()
{
	return verde;
}

unsigned char Cono::GetAzul()
{
	return azul;
}
