#include "Enemigo.h"

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