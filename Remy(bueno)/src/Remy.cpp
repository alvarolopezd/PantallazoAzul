#include "Remy.h"
#include <iostream>
using namespace std;

Remy::Remy() :Camina("Imagenes/Remy_Anda.png", 4, 1, 50), Quieto("Imagenes/Remy_Quieto.png", 1, 1, 50), Salto("Imagenes/Remy_Salto.png", 2, 1, 50), Muerto("Imagenes/RemyMuerto.png", 1, 1, 50)
{
	SetVida(3);
	SetAceleracion(0, -100);
	SetAltura(15);
	quesos = 0;

	Muerto.setCenter(5, 0);
	Muerto.setSize(10, 7);

	Camina.setCenter(5, 1);
	Camina.setSize(10, altura);

	Quieto.setCenter(5, 1.9);
	Quieto.setSize(10, altura - 1);

	Salto.setCenter(5, 1.9);
	Salto.setSize(10, altura);

}

void Remy::SetPosicion(float _XPosicion, float _YPosicion)
{
	posicion.SetCoordenadas(_XPosicion, _YPosicion);

}

void Remy::SetPosicion(Vector2D _posicion)
{
	posicion = _posicion;
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

void Remy::SetAltura(float _altura) {
	altura = _altura;
}

void Remy::SetQuesos(int _quesos)
{
	quesos = _quesos;
}

Vector2D Remy::GetPosicion()
{
	return posicion;
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

int Remy::GetVida()
{
	return vida;
}

double Remy::GetTiempoInmortal()
{
	return tiempo_inmortal;
}

float Remy::GetAltura() {
	return altura;
}

int Remy :: GetQuesos()
{
	return quesos;
}

void Remy::Pintar()
{
	glPushMatrix();
	glTranslatef(posicion.GetX(), posicion.GetY(), 0.5f);
	glColor3f(1.0f, 1.0f, 1.0f);

	if (velocidad.GetX() > 0.01 && vida > 0)
	{
		Camina.flip(false, false);
		Salto.flip(false, false);
		Camina.flip(false, false);
	}
	else if (velocidad.GetX() < -0.01 && vida > 0)
	{
		Camina.flip(true, false);
		Salto.flip(true, false);
		Camina.flip(true, false);
	}

	if (velocidad.GetX() < 0.01 && velocidad.GetX()>-0.01 && velocidad.GetY()==0 && vida>0)
	{
		Quieto.setState(0);
		Quieto.draw();
	}

	if (velocidad.GetY()==0 && (velocidad.GetX()>0.1 || velocidad.GetX()<-0.1) && vida > 0)
	{
		Camina.draw();
	}
	if (velocidad.GetY()!=0 && vida > 0)
	{
		Salto.draw();
	}
	if (vida <= 0)
	{
		Muerto.draw();
	}

	glTranslatef(-posicion.GetX(), -posicion.GetY(), -0.5f);
	glPopMatrix();
}

void Remy::Mover(float t)
{
	if (vida > 0)
	{
		posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
		velocidad = velocidad + aceleracion * t;
		Camina.loop();
		Salto.loop();
		//cout << posicion.x << "\n";
		//cout << quesos << "\n";
	}
}

void Remy::Atacar() {

}