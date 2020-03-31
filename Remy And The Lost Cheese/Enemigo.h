#pragma once
#include "Vector2D.h"

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


void Enemigo::SetPosicion(float _XPosicion, float _YPosicion)
{
	posicion.SetCoordenadas(_XPosicion, _YPosicion);
	
}

void Enemigo::SetVelocidad(float _XVelocidad, float _YVelocidad)
{
	velocidad.SetCoordenadas(_XVelocidad, _YVelocidad);
}

void Enemigo::SetAceleracion(float _XAceleracion, float _YAceleracion)
{
	aceleracion.SetCoordenadas(_XAceleracion, _YAceleracion);
}
void Enemigo::SetVida(int _vida)
{
	vida = _vida;
}

float Enemigo::GetXPosicion()
{
	return posicion.GetX();
}
float Enemigo::GetYPosicion()
{
	return posicion.GetY();
}
float Enemigo::GetXVelocidad()
{
	return velocidad.GetX();
}
float Enemigo::GetYVelocidad()
{
	return velocidad.GetY();
}
float Enemigo::GetXAceleracion()
{
	return aceleracion.GetX();
}
float Enemigo::GetYAceleracion()
{
	return aceleracion.GetY();
}

int Enemigo::GetVida()
{
	return vida;
}