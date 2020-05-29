#include "Vida.h"
#include "glut.h"

Vida::Vida(float _x, float _y) :vida("Imagenes/vida.png", 1, 1, 50)
{
	SetPosicion(_x, _y);
	SetVelocidad(0, 0);
	SetAceleracion(0, 0);

	vida.setCenter(5, 5);
	vida.setSize(10, 10);
}

void Vida::SetPosicion(float _XPosicion, float _YPosicion, float _limites)
{
	posicion.SetCoordenadas(_XPosicion, _YPosicion);
}

void Vida::SetPosicion(Vector2D _posicion)
{
	posicion = _posicion;
}

void Vida::SetVelocidad(float _XVelocidad, float _YVelocidad)
{
	velocidad.SetCoordenadas(_XVelocidad, _YVelocidad);
}

void Vida::SetAceleracion(float _XAceleracion, float _YAceleracion)
{
	aceleracion.SetCoordenadas(_XAceleracion, _YAceleracion);
}

Vector2D Vida::GetPosicion()
{
	return posicion;
}

float Vida::GetXPosicion()
{
	return posicion.GetX();
}

float Vida::GetYPosicion()
{
	return posicion.GetY();
}

float Vida::GetXVelocidad()
{
	return velocidad.GetX();
}

float Vida::GetYVelocidad()
{
	return velocidad.GetY();
}

float Vida::GetXAceleracion()
{
	return aceleracion.GetX();
}

float Vida::GetYAceleracion()
{
	return aceleracion.GetY();
}

void Vida::Dibuja() {
	glTranslatef(posicion.GetX(), posicion.GetY(), 0.5);
	vida.draw();
	glTranslatef(-posicion.GetX(), -posicion.GetY(), -0.5);
}

void Vida::Mover(float t)
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
}