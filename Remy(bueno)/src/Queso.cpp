#include "Queso.h"
#include "glut.h"

Queso::Queso(float _x,float _y):Quesito("\Imagenes/cheese.png",1,1)
{
	posicion.SetCoordenadas(0, 0);
	SetAltura(5);
	Quesito.setCenter(5, 0);
	Quesito.setSize(10, altura);

	SetPosicion(_x, _y);
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
	glTranslatef(posicion.GetX(), posicion.GetY(), 0.4);
	Quesito.draw();
	glTranslatef(-posicion.GetX(), -posicion.GetY(), -0.4);
}