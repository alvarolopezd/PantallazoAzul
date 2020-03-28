#pragma once
#include "Vector2D.h"

class Cilindro
{
private:
	Vector2D coordenadas;
	float p, base, top, height, slices, stacks;
	unsigned char rojo, verde, azul;
public:
	void SetAtributos(float _x, float _y, float _p, float _base, float _top, float _height, float _slices, float _stacks, unsigned char _rojo, unsigned char _verde, unsigned char _azul);
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

void Cilindro::SetAtributos(float _x, float _y, float _p, float _base, float _top, float _height, float _slices, float _stacks, unsigned char _rojo, unsigned char _verde, unsigned char _azul)
{
	coordenadas.SetCoordenadas(_x, _y);
	p = _p;
	base = _base;
	top = _top;
	height = _height;
	slices = _slices;
	stacks = _stacks;
	rojo = _rojo;
	verde = _verde;
	azul = _azul;
}

float Cilindro::GetX()
{
	return coordenadas.GetX();
}
float Cilindro::GetY()
{
	return coordenadas.GetY();
}

float Cilindro::GetP()
{
	return p;
}

float Cilindro::GetBase()
{
	return base;
}

float Cilindro::GetTop()
{
	return top;
}

float Cilindro::GetHeight()
{
	return height;
}

float Cilindro::GetSlices()
{
	return slices;
}

float Cilindro::GetStacks()
{
	return stacks;
}

unsigned char Cilindro::GetRojo()
{
	return rojo;
}

unsigned char Cilindro::GetVerde()
{
	return verde;
}

unsigned char Cilindro::GetAzul()
{
	return azul;
}
