#include "Mesa.h"

Mesa::Mesa() {
	coordenada.SetCoordenadas(0.0f, 0.0f);
	largo = 40.0f;
	rojo = 128;
	verde = 64;
	azul = 0;
	pataizq.SetAtributos(0, 0, 1, 1, 40, 50, 50, 128, 64, 0);
	patader.SetAtributos(0, 0, 1, 1, 40, 50, 50, 128, 64, 0);
}

void Mesa::SetCoordenadas(float _x, float _y)
{
	coordenada.SetCoordenadas(_x, _y);
	pataizq.SetCoordenadas(_x+(largo/4), 0);
	patader.SetCoordenadas(_x+((3*largo)/4), 0);
}

void Mesa::SetColores(unsigned char _rojo, unsigned char _verde, unsigned char _azul) {
	rojo = _rojo;
	verde = _verde;
	azul = _azul;
}
void Mesa::SetLargo(float _largo)
{
	largo = _largo;
}


void Mesa::Pintar() {

	float x, y;
	x = coordenada.GetX();
	y = coordenada.GetY();

	//TABLA DE LA MESA
	glBegin(GL_POLYGON);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x, y-1, 0.5);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x+largo, y-1, 0.5);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x + largo, y+1, 0.5);
	glColor3ub(rojo, verde, azul);
	glVertex3f(x , y+1, 0.5);
	glEnd();

	//PATA IZQUIERDA
	glColor3ub(rojo, verde, azul);
	glTranslatef(pataizq.GetX(),pataizq.GetY(),0);
	glColor3ub(pataizq.GetRojo(), pataizq.GetVerde(), pataizq.GetAzul());
	glRotatef(-90, 1, 0, 0);
	GLUquadricObj* p1 = gluNewQuadric();
	gluCylinder(p1, pataizq.GetBase(), pataizq.GetTop(), y, pataizq.GetSlices(), pataizq.GetStacks());
	glTranslatef(-pataizq.GetX(),-pataizq.GetY(),0);

	//PATA DERECHA
	glColor3ub(rojo, verde, azul);
	glTranslatef(patader.GetX(),patader.GetY(),0);
	glColor3ub(patader.GetRojo(), patader.GetVerde(), patader.GetAzul());
	GLUquadricObj* p2 = gluNewQuadric();
	gluCylinder(p2, patader.GetBase(), patader.GetTop(), y, patader.GetSlices(), patader.GetStacks());
	glTranslatef(-patader.GetX(),-patader.GetY(),0);
	glRotatef(90, 1, 0, 0);
}