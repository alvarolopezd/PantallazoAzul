#include "Trampa.h"
#include "glut.h"

Trampa::Trampa() {
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
	float x, y;
	x = posicion.GetX();
	y = posicion.GetY();
	glBegin(GL_POLYGON);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x, 0.5, y - 1);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x, 0.5, y + 1);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x - 5, 0.5, y + 1);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x - 5, 0.5, y - 1);
	glEnd();

}
