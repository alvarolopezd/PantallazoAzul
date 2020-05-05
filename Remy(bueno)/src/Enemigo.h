#pragma once
#include "Vector2D.h"
#include "ETSIDI.h"

class Enemigo
{
private:
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
	int vida;


public:
	void SetPosicion(float _XPosicion, float _YPosicion);
	void SetVelocidad(float _XVelocidad, float _YVelocidad);
	void SetAceleracion(float _XAceleracion, float _YAceleracion);
	void SetVida(int _vida);
	float GetXPosicion();
	float GetYPosicion();
	float GetXVelocidad();
	float GetYVelocidad();
	float GetXAceleracion();
	float GetYAceleracion();
	int GetVida();
};




