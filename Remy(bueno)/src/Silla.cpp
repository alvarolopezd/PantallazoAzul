#include "Silla.h"
#include "glut.h"


Silla::Silla() {
	coordenada.SetCoordenadas(0.0f, 0.0f);
	largo = 20.0f;
	rojo = 128;
	verde = 64;
	azul = 0;
	pataizq.SetAtributos(0, 0, 1, 1, 20, 50, 50, 128, 64, 0);
	patader.SetAtributos(0, 0, 1, 1, 20, 50, 50, 128, 64, 0);
}

void Silla::SetCoordenadas(float _x, float _y)
{
	coordenada.SetCoordenadas(_x, _y);
	pataizq.SetCoordenadas(_x + pataizq.GetBase() , 0);
	patader.SetCoordenadas((_x + largo - patader.GetBase()), 0);
}
void Silla::SetColores(unsigned char _rojo, unsigned char _verde, unsigned char _azul) {
	rojo = _rojo;
	verde = _verde;
	azul = _azul;
}
void Silla::SetLargo(float _largo)
{
	largo = _largo;
}


void Silla::Pintar() {

	float x, y;
	x = coordenada.GetX();
	y = coordenada.GetY();
	glBegin(GL_POLYGON);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x, y - 1, 0.5);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x, y + 1, 0.5);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x + largo, y + 1,0.5);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x + largo, y - 1,0.5);
	glEnd();

	//PATA IZQUIERDA
	glRotatef(-90, 1, 0, 0);
	glTranslatef(pataizq.GetX(),pataizq.GetY(),0);
	glColor3ub(pataizq.GetRojo(), pataizq.GetVerde(), pataizq.GetAzul());
	GLUquadricObj* p1 = gluNewQuadric();
	gluCylinder(p1, pataizq.GetBase(), pataizq.GetTop(), y, pataizq.GetSlices(), pataizq.GetStacks());
	glTranslatef(-pataizq.GetX(), -pataizq.GetY(),0);

	//PATA DERECHA
	glTranslatef(patader.GetX(),patader.GetY(),0);
	glColor3ub(patader.GetRojo(), patader.GetVerde(), patader.GetAzul());
	GLUquadricObj* p2 = gluNewQuadric();
	gluCylinder(p2, patader.GetBase(), patader.GetTop(), y, patader.GetSlices(), patader.GetStacks());
	glTranslatef(-patader.GetX(), -patader.GetY(), 0);
	glRotatef(90, 1, 0, 0);

}