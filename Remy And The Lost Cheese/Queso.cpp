#include "Queso.h"
#include "glut.h"

Queso::Queso() {
	posicion.SetCoordenadas(0, 0);
	cuerpo.SetAtributos(0, 0, 2, 5, 50, 50, 253, 253, 140);
}

void Queso::SetPosicion(float _x, float _y)
{
	posicion.SetCoordenadas(_x, _y);
	cuerpo.SetAtributos(posicion.GetX(), posicion.GetY(), 2, 5, 50, 50, 253, 253, 140);
}



float Queso::GetX() {
	return posicion.GetX();
}

float Queso::GetY() {
	return posicion.GetY();
}

void Queso::Dibuja() {

	glDisable(GL_LIGHTING);
	glTranslatef(cuerpo.GetX(), 0, cuerpo.GetY());
	glRotatef(-30, 0, 1, 0);
	glColor3ub(cuerpo.GetRojo(), cuerpo.GetVerde(), cuerpo.GetAzul());
	glutSolidCone(cuerpo.GetBase(), cuerpo.GetHeight(), cuerpo.GetSlices(), cuerpo.GetStacks()); // QUE ME DUVUELVE TOODS LOS PARAMETROS DEL CONO
	glRotatef(30, 0, 1, 0);
	glTranslatef(-cuerpo.GetX(), 0, -cuerpo.GetY());

}