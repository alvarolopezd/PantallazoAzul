#include "Gatitos.h"
#include "glut.h"

Gatitos::Gatitos() :Camina("Imagenes/GatoAndaBueno.png",8,1,50)
{
	
	SetAceleracion(0, -100);
	SetAltura(15);
	Camina.setCenter(5, 0);
	Camina.setSize(10, altura);
	
}



void Gatitos::SetPosicion(float _XPosicion, float _YPosicion)
{
	posicion.SetCoordenadas(_XPosicion, _YPosicion);

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
	
	
	if (velocidad.GetX() < 0.01 && velocidad.GetX() > -0.01)
	{
		Camina.setState(0);
	}
	else if (Camina.getState() == 0)
	{
		Camina.setState(1, false);
	}
	

	Camina.draw();
	

	glTranslatef(-posicion.GetX(), -posicion.GetY(), -0.5);

	glPopMatrix();
	
}

void Gatitos::Mover(float t)
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
	Camina.loop();
}