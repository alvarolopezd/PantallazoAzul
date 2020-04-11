
#pragma once
#include "Vector2D.h"
#include "glut.h"


class Plataforma {
private:
	Vector2D coordenada;
	unsigned char rojo, verde, azul;
	float largo;

public:
	Plataforma();
	void SetCoordenadas(float _x, float _z);
	void SetColores(unsigned char _rojo, unsigned char _verde, unsigned char _azul);
	void SetLargo(float _largo);
	//unsigned char GetRojo();
	//unsigned char GetVerde();
	//unsigned char GetAzul();
	void Pintar();


};



