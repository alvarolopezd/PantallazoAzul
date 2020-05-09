#include"Disparo.h"

Disparo::Disparo(float _xpos,float _ypos,float _xvel, float _yvel, float _xacel, float _yacel) :Espada("Imagenes/espada-remy.png", 1, 1, 50)
{
	posicion.SetCoordenadas(_xpos, _ypos);
	velocidad.SetCoordenadas(_xvel, _yvel);
	aceleracion.SetCoordenadas(_xacel, _yacel);


	Espada.setCenter(2.5, 2.5);
	Espada.setSize(5, 5);
}

void Disparo::SetPosicion(float _x, float _y)
{
	posicion.SetCoordenadas(_x, _y);
}

void Disparo::SetVelocidad(float _x, float _y)
{
	velocidad.SetCoordenadas(_x, _y);
}

void Disparo::Dibuja()
{
	
	glTranslatef(posicion.GetX(), posicion.GetY(), 0.5);
	Espada.draw();
	glTranslatef(-posicion.GetX(), -posicion.GetY(), -0.5);
}

void Disparo::Mueve(float t)
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
	Espada.setAngle(-posicion.GetX()*20.0);
	Espada.loop();
}