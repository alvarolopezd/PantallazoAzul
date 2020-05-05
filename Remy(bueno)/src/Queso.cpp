#include "Queso.h"
#include "glut.h"

Queso::Queso():Quesito("\Imagenes/cheese.png",1,1)
{
	posicion.SetCoordenadas(0, 0);
	SetAltura(5);
	Quesito.setCenter(5, 0);
	Quesito.setSize(10, altura);
	
}

void Queso::SetPosicion(float _x, float _y)
{
	posicion.SetCoordenadas(_x, _y+1);
	
}

void Queso::SetAltura(float _altura) {
	altura = _altura;
}

float Queso::GetX() {
	return posicion.GetX();
}

float Queso::GetY() {
	return posicion.GetY();
}

void Queso::Dibuja() {


	glTranslatef(posicion.GetX(), posicion.GetY(), 0.5);
	Quesito.draw();
	glTranslatef(-posicion.GetX(), -posicion.GetY(), -0.5);
	/*
	glDisable(GL_LIGHTING);
	glTranslatef(cuerpo.GetX(),cuerpo.GetY(),0);
	glRotatef(30, 0, 0, 1);
	glColor3ub(cuerpo.GetRojo(), cuerpo.GetVerde(), cuerpo.GetAzul());
	glutSolidCone(cuerpo.GetBase(), cuerpo.GetHeight(), cuerpo.GetSlices(), cuerpo.GetStacks()); // QUE ME DUVUELVE TOODS LOS PARAMETROS DEL CONO
	glRotatef(-30, 0, 0, 1);
	glTranslatef(-cuerpo.GetX(),-cuerpo.GetY(),0);
	*/

}