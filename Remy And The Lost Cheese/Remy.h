#pragma once
#include "Cono.h"
#include "Esfera.h"
#include "Vector2D.h"
#include "glut.h"

class Remy
{
private:

	Cono cuerpo;
	Cono sombrero;
	Esfera cabeza,ojod,ojoi;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
	int vida;

public:

	void SetPosicion(float _XPosicion, float _YPosicion);
	void SetVelocidad(float _XVelocidad, float _YVelocidad);
	void SetAceleracion(float _XAceleracion, float _YAceleracion);
	void SetVida(int _vida);
	void SetObjetos();
	float GetXPosicion();
	float GetYPosicion();
	float GetXVelocidad();
	float GetYVelocidad();
	float GetXAceleracion();
	float GetYAceleracion();
	void Pintar();
	void Mover(unsigned char _key);

};

void Remy::SetPosicion(float _XPosicion, float _YPosicion)
{
	posicion.SetCoordenadas(_XPosicion, _YPosicion);

}

void Remy::SetVelocidad(float _XVelocidad, float _YVelocidad)
{
	velocidad.SetCoordenadas(_XVelocidad, _YVelocidad);
}

void Remy::SetAceleracion(float _XAceleracion, float _YAceleracion)
{
	aceleracion.SetCoordenadas(_XAceleracion, _YAceleracion);
}

void Remy::SetVida(int _vida)
{
	vida = _vida;
}
float Remy::GetXPosicion()
{
	return posicion.GetX();
}
float Remy::GetYPosicion()
{
	return posicion.GetY();
}
float Remy::GetXVelocidad()
{
	return velocidad.GetX();
}
float Remy::GetYVelocidad()
{
	return velocidad.GetY();
}
float Remy::GetXAceleracion()
{
	return aceleracion.GetX();
}
float Remy::GetYAceleracion()
{
	return aceleracion.GetY();
}

void Remy::SetObjetos()
{
	ojoi.SetAtributos((GetXPosicion()+1), (GetYPosicion() + 13.5), 0.5, 50, 50, 0, 0, 0);
	ojod.SetAtributos((GetXPosicion()-1), (GetYPosicion() + 13.5), 0.5, 50, 50, 0, 0, 0);
	cabeza.SetAtributos(GetXPosicion(), GetYPosicion()+11, 3, 50, 50, 129, 216, 208);
	cuerpo.SetAtributos(GetXPosicion(), (GetYPosicion() +2), 3.25, 7, 50, 50, 129, 216, 208);
	sombrero.SetAtributos(GetXPosicion(), (GetYPosicion()+14), 1.5, 2.5, 50, 50, 212, 0, 40);

}

void Remy::Pintar()
{
	glDisable(GL_LIGHTING);
	glTranslatef(sombrero.GetX(), 0, sombrero.GetY());
	glColor3ub(sombrero.GetRojo(), sombrero.GetVerde(), sombrero.GetAzul());
	glutSolidCone(sombrero.GetBase(), sombrero.GetHeight(), sombrero.GetSlices(), sombrero.GetStacks()); // QUE ME DUVUELVE TOODS LOS PARAMETROS DEL CONO
	glTranslatef(-sombrero.GetX(), 0, -sombrero.GetY());

	glDisable(GL_LIGHTING);
	glTranslatef(cuerpo.GetX(), 0, cuerpo.GetY());
	glColor3ub(cuerpo.GetRojo(), cuerpo.GetVerde(), cuerpo.GetAzul());
	glutSolidCone(cuerpo.GetBase(), cuerpo.GetHeight(), cuerpo.GetSlices(), cuerpo.GetStacks()); // QUE ME DUVUELVE TOODS LOS PARAMETROS DEL CONO
	glTranslatef(-cuerpo.GetX(), 0, -cuerpo.GetY());

	glDisable(GL_LIGHTING);
	glTranslatef(cabeza.GetX(), 0, cabeza.GetY());
	glutSolidSphere(cabeza.GetRadius(), cabeza.GetSlices(), cabeza.GetStacks());
	glTranslatef(-cabeza.GetX(), 0, -cabeza.GetY());

	glDisable(GL_LIGHTING);
	glColor3ub(ojod.GetRojo(), ojod.GetVerde(),ojod.GetAzul());
	glTranslatef(ojod.GetX(), 4, ojod.GetY()-1);
	glutSolidSphere(ojod.GetRadius(), ojod.GetSlices(), ojod.GetStacks());
	glTranslatef(-ojod.GetX(), 0, -ojod.GetY()+0.75);

	glDisable(GL_LIGHTING);
	//glColor3ub(sombrero.GetRojo(), sombrero.GetVerde(), sombrero.GetAzul());
	glTranslatef(ojoi.GetX(), 4, ojoi.GetY());
	glutSolidSphere(ojoi.GetRadius(), ojoi.GetSlices(), ojoi.GetStacks());
	glTranslatef(-ojoi.GetX(), 0, -ojoi.GetY());
}

void Remy::Mover(unsigned char _key)
{
	float x, z;
	x = GetXPosicion();
	z = GetYPosicion();
	switch (_key)
	{
	case 'd':
	case 'D':
		x=x-10;
		break;
	case 'a':
	case 'A':
		x=x+10;
		break;

	default:
		break;
	}
	SetPosicion(x, z);
}