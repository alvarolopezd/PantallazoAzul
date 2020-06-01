#include <iostream>
#include "Gatitos.h"
#include "glut.h"

using namespace std;

Gatitos::Gatitos(float _x,float _y) :Camina("Imagenes/GatoAndaBueno.png",8,1,50),Ataque("Imagenes/Gato_Ataque.png",4,1,100),Quieto("Imagenes/Gatitos_Quieto.png",2,1,500)
{
	SetPosicion(_x, _y);
	SetVelocidad(10, 0);
	SetAceleracion(0, -100);
	SetAltura(15);

	Camina.setCenter(3.5, 1);
	Camina.setSize(10, altura);

	Ataque.setCenter(5, 1);
	Ataque.setSize(10, altura);

	Quieto.setCenter(5, 1);
	Quieto.setSize(10, altura);

	while (patrulla.GetX() == 0) {
		patrulla = posicion;
	}

	limites = 20;
}

void Gatitos::SetPosicion(float _XPosicion, float _YPosicion,float _limites)
{
	posicion.SetCoordenadas(_XPosicion, _YPosicion);
	limites = _limites;
}

void Gatitos::SetPosicion(Vector2D _posicion)
{
	posicion = posicion;
}

void Gatitos::SetVelocidad(float _XVelocidad, float _YVelocidad)
{
	velocidad.SetCoordenadas(_XVelocidad, _YVelocidad);
}

void Gatitos::SetAceleracion(float _XAceleracion, float _YAceleracion)
{
	aceleracion.SetCoordenadas(_XAceleracion, _YAceleracion);
}

void Gatitos::SetVida(int _vida)
{
	vida = _vida;
}

void Gatitos::SetAltura(float _altura) {
	altura = _altura;
}

Vector2D Gatitos::GetPosicion()
{
	return posicion;
}

float Gatitos::GetXPosicion()
{
	return posicion.GetX();
}

float Gatitos::GetYPosicion()
{
	return posicion.GetY();
}

float Gatitos::GetXVelocidad()
{
	return velocidad.GetX();
}

float Gatitos::GetYVelocidad()
{
	return velocidad.GetY();
}

float Gatitos::GetXAceleracion()
{
	return aceleracion.GetX();
}

float Gatitos::GetYAceleracion()
{
	return aceleracion.GetY();
}

void Gatitos::SetAtaque(int estado)
{
	atacar = estado;
}

void Gatitos::Pintar() {


	glPushMatrix();
	glTranslatef(posicion.GetX(), posicion.GetY(), 0.5);
	glColor3f(1.0f, 1.0f, 1.0f);

	if (velocidad.GetX() > 0.01)
	{
		Camina.flip(false, false);
		
	}
	else if (velocidad.GetX() < -0.01)
	{
		Camina.flip(true, false);

	}
	
	if (velocidad.GetX() < 0.01 && velocidad.GetX() > -0.01 && velocidad.GetY() == 0 && atacar==0)
	{
		
		Quieto.draw();
		if (Quieto.getState() == 1)
		{
			Quieto.setState(0,false);
		}
	}

	if (velocidad.GetY() == 0 && (velocidad.GetX() > 0.1 || velocidad.GetX() < -0.1) && atacar==0)
	{
		Camina.draw();
	}

	if (atacar == 1)
	{
		
		Ataque.draw();
		if (Ataque.getState() > 3)
		{
			Ataque.setState(0);
			atacar = 0;
		}
	}
	

	glTranslatef(-posicion.GetX(), -posicion.GetY(), -0.5);

	glPopMatrix();
	
}

void Gatitos::Mover(float t)
{
	if (atacar == 0)
	{
		posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
		velocidad = velocidad + aceleracion * t;
		Camina.loop();
		Quieto.loop();
		

		if (posicion.GetX() > patrulla.GetX() + limites)
		{
			posicion.SetCoordenadas(patrulla.GetX() + limites, posicion.GetY());
			velocidad.SetCoordenadas(-10, 0);

		}
		else if (posicion.GetX() < patrulla.GetX() - limites)
		{
			velocidad.SetCoordenadas(10, 0);
			posicion.SetCoordenadas(patrulla.GetX() - limites, posicion.GetY());
		}
	}
	cout << atacar << endl;
	Ataque.loop();
}

