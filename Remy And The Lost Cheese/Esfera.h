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


void Esfera::SetAtributos(float _x, float _y, float _radius, float _slices, float _stacks, unsigned char _rojo, unsigned char _verde, unsigned char _azul)
{
	coordenadas.SetCoordenadas(_x, _y);
	radius = _radius;
	slices = _slices;
	stacks = _stacks;
	rojo = _rojo;
	verde = _verde;
	azul = _azul;
}



float Esfera::GetX()
{
	return coordenadas.GetX();
}

float Esfera::GetY()
{
	return coordenadas.GetY();
}

float Esfera::GetRadius()
{
	return radius;
}


float Esfera::GetSlices()
{
	return slices;
}

float Esfera::GetStacks()
{
	return stacks;
}

unsigned char Esfera::GetRojo()
{
	return rojo;
}

unsigned char Esfera::GetVerde()
{
	return verde;
}

unsigned char Esfera::GetAzul()
{
	return azul;
}

