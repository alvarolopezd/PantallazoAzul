#include "Esfera.h"


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
