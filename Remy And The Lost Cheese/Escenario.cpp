#include "Escenario.h"
#include "glut.h"

void Escenario::PintarPlano()
{
	glBegin(GL_POLYGON);
	PintarVertice(0, 0, 0, 0, 0, 0);
	PintarVertice(0, 0, 0, 0, 0, 0);
	PintarVertice(0, 0, 0, 0, 0, 0);
	PintarVertice(0, 0, 0, 0, 0, 0);

}

void Escenario::PintarVertice(float x, float y, float z, unsigned char rojo, unsigned char verde, unsigned char azul)
{
	glColor3ub(rojo, verde, azul); //COLOR VERTICE
	glVertex3f(x, y, z); // POSICION VERTICE

}