#include "Plataforma.h"

Plataforma::Plataforma(float _x, float _y, float _largo)
{
	largo = _largo;
	coordenada.SetCoordenadas(_x, _y);
	rojo = 128;
	verde = 64;
	azul = 0;
}

Plataforma::Plataforma() {
	coordenada.SetCoordenadas(0.0f, 0.0f);
	largo = 20.0f;
	rojo = 128;
	verde = 64;
	azul = 0;
}

void Plataforma::SetCoordenadas(float _x, float _y)
{
	coordenada.SetCoordenadas(_x, _y);
}
void Plataforma::SetColores(unsigned char _rojo, unsigned char _verde, unsigned char _azul) {
	rojo = _rojo;
	verde = _verde;
	azul = _azul;
}
void Plataforma::SetLargo(float _largo)
{
	largo = _largo;
}

float Plataforma::GetXCoordenada() {
	return coordenada.GetX();
}

float Plataforma::GetYCoordenada() {
	return coordenada.GetY();
}

float Plataforma::GetLargo() {
	return largo;
}

void Plataforma::Pintar() {

	float x, y;
	x = coordenada.GetX();
	y = coordenada.GetY();
	glBegin(GL_POLYGON);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x, y - 1, 0.5);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x, y + 1, 0.5);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x + largo, y + 1, 0.5);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x + largo, y - 1, 0.5);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex3f(x - 0.3, y - 1.3, 0.49);
	glColor3ub(0, 0, 0);
	glVertex3f(x - 0.3, y + 1.3, 0.49);
	glColor3ub(0, 0, 0);
	glVertex3f(x + largo + 0.3, y + 1.3, 0.49);
	glColor3ub(0, 0, 0);
	glVertex3f(x + largo + 0.3, y - 1.3, 0.49);
	glEnd();
}