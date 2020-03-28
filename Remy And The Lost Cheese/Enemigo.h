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
	void SetAtributos(float _XPosicion, float _YPosicion, float _XVelocidad, float _YVelocidad, float _XAceleracion, float _YAceleracion);
	void SetVida(int _vida);
	float GetXPosicion();
	float GetYPosicion();
	float GetXVelocidad();
	float GetYVelocidad();
	float GetXAceleracion();
	float GetYAceleracion();
	int GetVida();
};


void Enemigo::SetAtributos(float _XPosicion, float _YPosicion, float _XVelocidad, float _YVelocidad, float _XAceleracion, float _YAceleracion)
{
	posicion.SetCoordenadas(_XPosicion, _YPosicion);
	velocidad.SetCoordenadas(_XVelocidad, _YVelocidad);
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