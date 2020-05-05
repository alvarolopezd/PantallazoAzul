#include "Cilindro.h"


void Cilindro::SetAtributos(float _x, float _y, float _base, float _top, float _height, float _slices, float _stacks, unsigned char _rojo, unsigned char _verde, unsigned char _azul)
{
	coordenadas.SetCoordenadas(_x, _y);
	base = _base;
	top = _top;
	height = _height;
	slices = _slices;
	stacks = _stacks;
	rojo = _rojo;
	verde = _verde;
	azul = _azul;
}

void Cilindro::SetCoordenadas(float _x, float _y) {
	coordenadas.SetCoordenadas(_x, _y);
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
