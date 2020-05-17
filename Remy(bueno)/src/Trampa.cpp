#include "Trampa.h"
#include "glut.h"

Trampa::Trampa(float _x,float _y):sprite("Imagenes/bomba.png",1,1,50)
{
	posicion.SetCoordenadas(_x, _y);

	sprite.setSize(5, 5);
	sprite.setCenter(2.5, 0);

	rojo = 204;
	verde =  119;
	azul = 34;
}


void Trampa::SetCoordenadas(float _x, float _y)
{
	posicion.SetCoordenadas(_x, _y);
}

void Trampa::SetColores(unsigned char _rojo, unsigned char _verde, unsigned char _azul) {
	rojo = _rojo;
	verde = _verde;
	azul = _azul;
}

void Trampa::Dibuja()
{
	glTranslatef(posicion.GetX(),posicion.GetY(), 0);
	sprite.draw();
	glTranslatef(-posicion.GetX(), -posicion.GetY(), 0);
}

float Trampa::GetX()
{
	return posicion.GetX();
}

float Trampa::GetY()
{
	return posicion.GetY();
}