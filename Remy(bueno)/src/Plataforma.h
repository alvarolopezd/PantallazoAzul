
#pragma once
#include "Vector2D.h"
#include "glut.h"


class Plataforma {
private:
	Vector2D coordenada;
	unsigned char rojo, verde, azul;
	float largo;

	friend class Interaccion;

public:
	Plataforma();
	Plataforma(float _x, float _y, float _largo = 20.0f);
	void SetCoordenadas(float _x, float _z);
	void SetColores(unsigned char _rojo, unsigned char _verde, unsigned char _azul);
	void SetLargo(float _largo);
	float GetXCoordenada();
	float GetYCoordenada();
	float GetLargo();
	//unsigned char GetRojo();
	//unsigned char GetVerde();
	//unsigned char GetAzul();
	void Pintar();


};



